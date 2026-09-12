#include "bits/stdc++.h"
using namespace std;
#define int long long

const int MAX_A = 262150;
const int MAX_M = 18;

int g_val[MAX_A];
int best_g[MAX_M + 1][MAX_A];

void precompute()
{
    for (int i = MAX_A - 1; i >= 0; i--)
        g_val[i] = (i != 0) ? i + __builtin_popcount(i) + (31 - __builtin_clz(i)) : 0;

    for (int m = MAX_M; m >= 0; m--)
    {
        int step = 1LL << m, cur = 2e9;
        for (int x = MAX_A - 1; x >= 0; x--)
        {
            cur = (x % step == 0) ? min(cur, g_val[x]) : cur;
            best_g[m][x] = cur;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum_a = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum_a += a[i];
    }

    int ans = -1;
    for (int m = MAX_M; m >= 0; m--)
    {
        int cost = -sum_a - (n - 1) * m;
        for (int j = n - 1; j >= 0; j--)
            cost += best_g[m][a[j]];
        ans = (ans != -1 && cost >= ans) ? ans : cost;
    }
    cout << ans << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    precompute();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
