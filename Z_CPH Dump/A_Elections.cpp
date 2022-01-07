#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(0,max(b,c)+1-a)<<" "<<max(0,max(a,c)+1-b)<<" "<<max(0,max(b,a)+1-c)<<endl;
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
