#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long c;
    cin >> n >> c;
    vector<long long> a(n);
    long long sum = 0;
    int i = n - 1;
    while (i >= 0)
    {
        cin >> a[i];
        sum += a[i];
        i--;
    }
    sort(a.begin(), a.end());

    long long ans = sum - (long long)n * c;
    int k = 1;
    while (k <= n >> 1)
    {
        sum -= a[k - 1];
        ans = max(ans, sum - (long long)(n - k) * c);
        k++;
    }
    cout << ans << "\n";
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
