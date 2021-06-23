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
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &x : a)
            cin >> x;

        long long ans = a[0] + a[n - 1];
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && a[i - 1] < a[i])
            {
                ans += a[i] - a[i - 1];
            }
            if (i + 1 < n && a[i + 1] < a[i])
            {
                ans += a[i] - a[i + 1];
            }
        }

        for (int i = 0; i < n; i++)
        {
            int left = (i == 0 ? 0 : a[i - 1]);
            int right = (i + 1 == n ? 0 : a[i + 1]);
            if (left < a[i] && right < a[i])
            {
                ans -= a[i] - max(left, right);
            }
        }
        cout << ans << '\n';
    }
}