#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
#define int long long

bool ispalindrome(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - 1 - i])
            return false;
    }
    return true;
}

void solve()
{
    int xa, xb, ya, yb, xf, yf;
    cin >> xa >> ya >> xb >> yb >> xf >> yf;
    int ans = 0;
    ans += abs(xa - xb) + abs(ya - yb);
    if (xa == xf && xb == xf)
    {
        int miny = min(ya, yb);
        int maxy = max(ya, yb);

        if (yf > miny && yf < maxy)
            ans += 2;
    }
    else if (ya == yf && yb == yf)
    {
        int minx = min(xa, xb);
        int maxx = max(xa, xb);

        if (xf > minx && xf < maxx)
            ans += 2;
    }

    cout << ans << endl;
}

int32_t main()
{
    FAST;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}