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
    cin >> n;
    n--;
    int msb = 30;
    for (; msb >= 0; msb--){
        if(n & (1<<msb))
            break;
    }
    int x = (1 << msb) - 1;
    for (int i = n; i > x;i--)
        cout << i << " ";
    for (int i = 0; i <= x;i++)
        cout << i << " ";

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