#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
#define int long long

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int p = 0, q = 0;
    vector<int> res;
    for (int i = 0; i < n + m; i++)
    {
        if (p < n && a[p] <= k)
        {
            res.push_back(a[p]);
            if (a[p] == 0)
                k++;
            p++;
        }
        else if (q < m && b[q] <= k)
        {
            res.push_back(b[q]);
            if (b[q] == 0)
                k++;
            q++;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << res[i] << " ";
    }

    cout << endl;
}

int32_t main()
{
    FAST;
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
