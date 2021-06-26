// // Created by Jestin Roy
// HINTS: (i+j) <= 2*n
//      : The number of pairs (a,b) such that a⋅b≤x is O(xlogx)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = v[i]; j <= 2 * n; j += v[i])
        {
            if (j - i > i && (j - i) <= n && v[j - i] == j / v[i])
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
}
int32_t main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}