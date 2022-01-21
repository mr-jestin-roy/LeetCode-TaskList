#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
// #define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a){
        cin >> i;
    }
    long long ans = 0;
    for (int i = 0; i < n;i++){
        int maxi = a[i], mini = a[i];
        for (int j = i; j < n; j++){
            maxi = max(maxi, a[j]);
            mini = min(mini, a[j]);
            ans += maxi - mini;
        }
    }
    cout << ans << endl;
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