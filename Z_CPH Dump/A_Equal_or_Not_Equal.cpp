#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    int count = 0;
    for (int i = 0;i<n;i++){
        if(s[i]=='N'){
            count++;
        }
    }
    if(count == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);

    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}