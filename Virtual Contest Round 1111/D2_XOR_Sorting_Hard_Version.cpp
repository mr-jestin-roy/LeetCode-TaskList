#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    int K = 0;
    while ((1 << K) < n) K++;
    int SZ = 1 << K;

    vector<int> max_val(2 * SZ, 0);
    vector<int> min_val(2 * SZ, 2e9 + 7);
    vector<int> vio(2 * SZ, 0);
    vector<int> level(2 * SZ, 0);
    vector<int> count(K + 1, 0);

    int i = SZ - 1;
    while (i >= 1)
    {
        level[i] = K - 1 - (31 - __builtin_clz(i));
        i--;
    }

    i = 0;
    while (i < n)
    {
        cin >> max_val[SZ + i];
        min_val[SZ + i] = max_val[SZ + i];
        i++;
    }

    i = SZ - 1;
    while (i >= 1)
    {
        max_val[i] = max(max_val[2 * i], max_val[2 * i + 1]);
        min_val[i] = min(min_val[2 * i], min_val[2 * i + 1]);
        vio[i] = max_val[2 * i] > min_val[2 * i + 1];
        count[level[i]] += vio[i];
        i--;
    }

    auto get_ans = [&]() {
        int k = K - 1;
        while (k >= 0)
        {
            if (count[k] > 0) return 1 << k;
            k--;
        }
        return 0;
    };

    cout << get_ans() << " ";

    i = 0;
    while (i < q)
    {
        int p, x;
        cin >> p >> x;
        p += SZ;
        max_val[p] = x;
        min_val[p] = x;
        p >>= 1;

        while (p > 0)
        {
            max_val[p] = max(max_val[2 * p], max_val[2 * p + 1]);
            min_val[p] = min(min_val[2 * p], min_val[2 * p + 1]);
            int new_vio = max_val[2 * p] > min_val[2 * p + 1];
            count[level[p]] += new_vio - vio[p];
            vio[p] = new_vio;
            p >>= 1;
        }
        cout << get_ans() << " ";
        i++;
    }
    cout << "\n";
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
