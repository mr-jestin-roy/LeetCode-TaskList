#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

int findTheWinner(int n, int k) {
        int res = 0;
        for (int i = 1; i <= n; ++i)
            res = (res + k) % i;
        return res + 1;
}
void solve()
{
    int x,m;
    cin >> m>>x;
    int value;
    int p[x + 1];
    p[0] = 1;
    p[1] = 1;
    for (int i = 2; i <= x;i++)
    {
        value = (m % i);
        if(value == 0)
            value = i;
        p[i] = p[i - 1];
        if(p[i] >= value)
            p[i] += 1;
    }
    for (int i = 1;i <= x;i++){
        cout << p[i] << " ";
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