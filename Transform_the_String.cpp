#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e15

void solve()
{
    string f;
    string s;
    cin >> s>>f;
    int ans =0;
    for(auto e:s){
        int a = (e-'a');
        int total = 26;
        for(auto z: f){
            int b = (z-'a');
            total = min(total, min((b-a + 26)%26, (a-b + 26)%26));
        }
        ans += total;
    }
    
    cout << ans << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++)
    {
        cout << "Case #" << caseNum << ": ";
        solve();
    }
}