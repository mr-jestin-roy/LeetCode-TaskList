#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int a, s;
    cin >> a >> s;

    string ans = "";

    while (a)
    {
        int left = a % 10;
        a /= 10;
        int sum = s % 10;

        if (sum < left)
        {
            sum = s % 100;
            s /= 100;
        }
        else
        {
            s /= 10;
        }

        int dif = sum - left;

        if (dif > 9 || dif < 0)
        {
            cout << -1 << endl;
            return;
        }

        ans += dif + '0';
    }

    while (s)
    {
        ans += (s % 10) + '0';
        s /= 10;
    }

    reverse(ans.begin(), ans.end());

    int i = 0;
    while (ans[i] == '0')
    {
        i++;
    }

    ans = ans.substr(i);

    cout << ans << endl;
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}