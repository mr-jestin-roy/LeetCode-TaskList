#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
long long a[MAXN];
int b[MAXN];

long long rangeSum(int lo, int hi)
{
    long long s = 0;
    int j = hi;
    while (j >= lo)
    {
        s += a[j];
        j--;
    }
    return s;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    int i = 1;
    while (i <= n)
    {
        cin >> a[i];
        i++;
    }

    i = 0;
    while (i < m)
    {
        cin >> b[i];
        i++;
    }

    sort(b, b + m);

    long long max_productivity = 0;
    int last_b = 0;

    i = 0;
    while (i < m)
    {
        long long current_block_sum = rangeSum(last_b + 1, b[i]);
        max_productivity += (current_block_sum < 0) ? -current_block_sum : current_block_sum;
        last_b = b[i];
        i++;
    }

    max_productivity += rangeSum(last_b + 1, n);

    cout << max_productivity << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    if (cin >> t)
    {
        while (t--)
            solve();
    }
    return 0;
}
