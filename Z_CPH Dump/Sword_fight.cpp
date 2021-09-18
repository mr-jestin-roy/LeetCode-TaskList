#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
typedef long long ll;

int32_t main()
{
    FAST;
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int q;
    cin >> q;
    vector<int> x(q), y(q);
    for (int i = 0; i < q; i++)
        cin >> x[i] >> y[i]; //computing for all q queries together
    for (auto &i : x)
        i = i & ((1 << 17) - 1);

    vector<ll> hit(n);
    vector<ll> dp(1 << 17);
    int block = (1 << 9);

    int remaining = n;
    //executing in blocks of size(1<<9)
    for (int i = 0; i < q; i += block)
    {
        for (int j = i; j < min(q, i + block); j++)
            dp[x[j]] += y[j];

        for (int k = 0; k < 17; k++)
        {
            for (int j = (1 << 17) - 1; j >= 0; j--)
            {
                if (j & (1 << k))
                    continue;
                dp[j] += dp[j | (1 << k)];
            }
        }

        vector<int> temp(block);
        for (int j = 0; j < n; j++)
            if (hit[j] < a[j] && hit[j] + dp[j] >= a[j])
            {
                ll life = a[j] - hit[j];
                for (int k = i; k < min(q, i + block); k++)
                    if ((j & x[k]) == j)
                    {
                        life -= y[k];
                        if (life <= 0)
                        {
                            temp[k - i]--;
                            break;
                        }
                    }
            }

        for (int j = i; j < min(q, i + block); j++)
        {
            remaining += temp[j - i];
            cout << remaining << endl;
        }
        //resetting dp vector
        for (int j = 0; j < n; j++)
        {
            hit[j] += dp[j];
            dp[j] = 0;
        }
    }
}