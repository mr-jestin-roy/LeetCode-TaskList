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
    //you can solve it using the complex method 
    //but the easier method is to compute all 6 combinations
    // & compute the maximum from there
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
//6 combination because of 3 places & 2 choices each = 3x2 = 6
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