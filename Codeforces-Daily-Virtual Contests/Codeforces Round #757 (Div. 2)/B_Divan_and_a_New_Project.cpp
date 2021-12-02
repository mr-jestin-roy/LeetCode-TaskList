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
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &x: a)
        cin >> x;

    vector<int> ind(n);
    iota(ind.begin(), ind.end(), 0);
    sort(ind.begin(), ind.end(), [&](int i, int j)
         { return a[i] > a[j]; });

    vector<int> x(n);
    int curr_x = 1;
    for (int i = 0; i < n;i++){
        if(i%2 == 0){
            x[ind[i]] = curr_x;
        }
        else{
            x[ind[i]] = -curr_x;
            curr_x += 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < n;i++){
        ans += 2LL * abs(x[i]) * a[i];
    }
    cout << ans << endl;
    cout << 0 << " ";
    for (int i = 0; i < n;i++){
        cout << x[i] << " ";
    }
    cout << endl;
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
