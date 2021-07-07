#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve()
{
    long long a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "0 0\n";
    }
    else
    {
        long long d = abs(a - b);
        cout << d << " " << min(a % d, d - a % d) << "\n";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}