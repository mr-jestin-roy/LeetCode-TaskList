#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15
void solve()
{
    int a, b, c, p, q, r;
    cin >> a >> b >> c >> p >> q >> r;
    int majority = (p + q + r) / 2;
    if(majority < (a+b+c) ){
        cout << "YES" << endl;
        return;
    }
    int adiff = abs(p - a);
    int bdiff = abs(q - b);
    int cdiff = abs(r - c);

    int maxdiff = max({adiff, bdiff, cdiff});
    if(majority < (a+b+c+maxdiff)){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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