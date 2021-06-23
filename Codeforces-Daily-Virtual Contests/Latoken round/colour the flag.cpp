// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

int32_t main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }

        vector<string> ans(n, string(m, 0));

        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans[i][j] = ((i + j) % 2 == 0 ? 'R' : 'W');
                ok &= ans[i][j] == a[i][j] || a[i][j] == '.';
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
            for (auto &x : ans)
                cout << x << endl;
            continue;
        }
        ok = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans[i][j] = ((i + j) % 2 == 0 ? 'W' : 'R');
                ok &= ans[i][j] == a[i][j] || a[i][j] == '.';
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
            for (auto &x : ans)
                cout << x << endl;
        }
        else
            cout << "NO" << endl;
    }
}