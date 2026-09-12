#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    string s, t;
    cin >> s >> t;

    vector<int> p(2 * (n + 1), 0);
    int i = 0;
    while (i < n)
    {
        p[2 * (i + 1)] = p[2 * i] + (s[i] == '0' && t[i] == '1');
        p[2 * (i + 1) + 1] = p[2 * i + 1] + (s[i] == '1' && t[i] == '0');
        i++;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int len = r - l + 1;
        int c01 = p[2 * r] - p[2 * (l - 1)];
        int c10 = p[2 * r + 1] - p[2 * (l - 1) + 1];

        cout << (((c01 << 1) <= len && (c10 << 1) <= len) ? "YES\n" : "NO\n");
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
