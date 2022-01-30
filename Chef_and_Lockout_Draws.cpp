#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a + 3);
    if(a[2] == a[1]+a[0])
        cout << "YES" << endl;
    else
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
