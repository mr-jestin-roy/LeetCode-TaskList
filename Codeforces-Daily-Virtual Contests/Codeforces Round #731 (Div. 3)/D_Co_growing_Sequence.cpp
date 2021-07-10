#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "0 ";
    for (int i = 1; i < n; i++)
    {
        int p = a[i - 1];
        int ans = (a[i] | p) ^ a[i];
        cout << ans << " ";
        a[i] ^= ans;
    }

    cout << endl;
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
