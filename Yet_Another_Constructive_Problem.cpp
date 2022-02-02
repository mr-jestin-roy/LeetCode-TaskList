#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long 
#define mod 998244353
#define endl "\n"
#define inf 1e15
void solve()
{
    int x;
    cin >> x;
    cout << (x ^ 1) << " " << (x ^ 2) << " " << x << endl;
    //easier alternative code inspired from Utkarsh Gupta Videp
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