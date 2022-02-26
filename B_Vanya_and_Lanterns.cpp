#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15
void solve()
{
    int n, k;
    cin >> n >> k;
    double a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];

    }
    sort(a, a + n);
    double ans = max(a[0], k - a[n - 1]);
    for (int i = 0; i < n - 1;i++){

        ans = max(ans, ((double)(a[i + 1] - a[i])) / 2.0);
    }
//to set the precision to 10 floating decimal points
    cout << fixed << setprecision(10) << ans << endl;
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