#pragma GCC optimize("Ofast")//Comment optimisations for interactive problems (use endl)
#include "bits/stdc++.h"
using namespace std;
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int a, b, c, maxx = 0;
    cin >> a >> b >> c;
    if(a + b + c > maxx)
        maxx = (a + b + c);
    if(a + b * c > maxx)
        maxx = a + b * c;
    if(a * b + c > maxx)
        maxx = a * b + c;
    if((a + b) * c > maxx)
        maxx = (a + b) * c;
    if(a * (b + c) > maxx)
        maxx = a * (b + c);
    if(a * b * c > maxx)
        maxx = a * b * c;

    cout << maxx;
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    // cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}