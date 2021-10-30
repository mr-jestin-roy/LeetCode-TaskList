#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

void solve()
{
    int n; cin>>n;
    string s,res = "";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='U')
            res += 'D';
        else if(s[i]== 'D')
            res += 'U';
        else if(s[i] == 'R')
            res += 'R';
        else if(s[i] == 'L')
            res += 'L';
    }
    cout<<res<<endl;
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
