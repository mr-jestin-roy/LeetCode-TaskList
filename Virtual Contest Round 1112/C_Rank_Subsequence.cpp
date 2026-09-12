#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> attr(4 * n);
    int i = 0;
    while (i < n)
    {
        cin >> attr[4 * i] >> attr[4 * i + 1] >> attr[4 * i + 2] >> attr[4 * i + 3];
        i++;
    }
    auto L = [&](int idx) { return attr[4 * idx]; };
    auto R = [&](int idx) { return attr[4 * idx + 1]; };
    auto U = [&](int idx) { return attr[4 * idx + 2]; };
    auto V = [&](int idx) { return attr[4 * idx + 3]; };

    auto achievable = [&](int m) -> bool {
        int c = 0, k = 1;
        while (k <= m)
        {
            bool f = false;
            while (c < n)
            {
                if ((k < L(c) || k > R(c)) && (m - k + 1 < U(c) || m - k + 1 > V(c)))
                {
                    f = true;
                    c++;
                    break;
                }
                c++;
            }
            if (!f) return false;
            k++;
        }
        return true;
    };

    int m = n;
    while (m >= 1)
    {
        if (achievable(m))
        {
            cout << m << "\n";
            return;
        }
        m--;
    }
    cout << 0 << "\n";
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
