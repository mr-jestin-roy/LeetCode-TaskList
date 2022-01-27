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
    int a[n + 1];
    map<int, int> hash;

    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int cnt = 0;
    while(1){
        int k = 0;
        for (int i = n; i >= 1;i--){
            if(a[i] != a[n])
                break;

            k = n - i + 1;
        }
        if(k == n)
        {
            break;
        }
        
        for (int i = max(1, n - 2 * k + 1); i <= n;i++){
            a[i] = a[n];
        }
        cnt++;
    }
    cout << cnt << endl;
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
