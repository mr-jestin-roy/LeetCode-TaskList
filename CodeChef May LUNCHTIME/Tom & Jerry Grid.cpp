// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

void solve()
{
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    int res = abs(c - a) + abs(d - b);

    // Checking minimum and parity condition
    if (k >= X && k % 2 == X % 2)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int32_t main()
{
    fast;
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