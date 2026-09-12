#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int len = 2 * n;
    vector<int> a(len + 1);
    vector<int> first_pos(n + 1, 0);
    vector<long long> dp(len + 1, 0);

    int i = 1;
    while (i <= len) { cin >> a[i]; i++; }

    i = 1;
    while (i <= len)
    {
        int j = first_pos[a[i]];
        long long seg_len = i - j + 1;
        dp[i] = dp[i - 1] + 1;
        dp[i] = (j != 0) ? max(dp[i], dp[j - 1] + seg_len * seg_len) : dp[i];
        first_pos[a[i]] = (j == 0) ? i : first_pos[a[i]];
        i++;
    }

    cout << dp[len] << "\n";
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
