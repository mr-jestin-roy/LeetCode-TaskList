#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, m;
    cin >> n >> k >> m;

    if (k <= m)
    {
        cout << "YES\n";
        long long last_val = m - k + 1;
        vector<long long> ans(n);
        int i = n - 1;
        while (i >= 0)
        {
            ans[i] = 1 + (last_val - 1) * ((i % k) == k - 1);
            i--;
        }
        i = 0;
        while (i < n)
        {
            cout << ans[i] << (i == n - 1 ? "" : " ");
            i++;
        }
        cout << "\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
