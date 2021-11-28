#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

void solve()
{int n;
    cin >> n;
    vector<ll> a(n);
    ll f = 1;
    ll ans = 0;
    ll sum = 0;
    for(int i=0;i<n;++i) {
        cin >> a[i];
        while(a[i] % 2 == 0) {
            a[i] /= 2;
            f *= 2;
        }
        sum += a[i];
    }
    for(int i=0;i<n;++i) {
        ans = max(ans, sum - a[i] + a[i] * f);
    }
    cout << ans << "\n";
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
