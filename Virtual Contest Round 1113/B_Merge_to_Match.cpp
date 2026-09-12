#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    int i = n - 1;
    while (i >= 0) { cin >> a[i]; i--; }
    i = m - 1;
    while (i >= 0) { cin >> b[i]; i--; }

    if (n >= (m << 1))
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        auto valid = [&]() -> bool {
            int j = m - 1;
            while (j >= 0)
            {
                if (a[j] > b[j] || a[n - m + j] < b[j]) return false;
                j--;
            }
            return true;
        };

        cout << (valid() ? "YES\n" : "NO\n");
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
