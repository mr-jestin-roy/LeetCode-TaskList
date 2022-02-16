#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int n;
    cin>>n;
    int x,y,z;
    x = y = z = 0;
    for (int i = 0; i < n; i++){
        
       int a, b, c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if(x+y+z != 0){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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