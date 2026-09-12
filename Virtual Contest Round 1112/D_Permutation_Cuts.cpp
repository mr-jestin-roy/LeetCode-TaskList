#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n - 1), fl(2 * n + 2, -1), b;
    int i = 0;
    while (i < n - 1)
    {
        cin >> a[i];
        int x = a[i];
        fl[2 * x] = (fl[2 * x] == -1) ? i : fl[2 * x];
        fl[2 * x + 1] = i;
        if (b.empty() || b.back() != x) b.push_back(x);
        i++;
    }
    auto L = [&](int x) { return fl[2 * x]; };
    auto R = [&](int x) { return fl[2 * x + 1]; };

    int p = max_element(b.begin(), b.end()) - b.begin();
    if (b[p] != n - 1) { cout << 0 << "\n"; return; }

    auto monotoneValid = [&]() -> bool {
        vector<int> cnt(n + 1, 0);
        int j = (int)b.size() - 1;
        while (j >= 0)
        {
            bool bad = (++cnt[b[j]] > 1) || (j < p && b[j] > b[j + 1]) || (j > p && b[j - 1] < b[j]);
            if (bad) return false;
            j--;
        }
        return true;
    };

    if (!monotoneValid()) { cout << 0 << "\n"; return; }

    auto computeAns = [&]() -> long long {
        long long ans = 2, S = R(n - 1) - L(n - 1);
        int x = n - 2;
        while (x >= 1)
        {
            if (L(x) == -1)
            {
                if (S <= 0) return -1;
                ans = ans * S-- % 998244353;
            }
            else
            {
                S += R(x) - L(x);
            }
            x--;
        }
        return ans;
    };

    long long ans = computeAns();
    cout << (ans == -1 ? 0 : ans) << "\n";
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
