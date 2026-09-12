#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long sum = 0, i = 1;
    bool possible = true;
    while (i <= n)
    {
        long long a, required = (i * (i + 1)) >> 1;;
        cin >> a;
        sum += a;
        possible &= (sum >= required);
        i++;
    }

    cout << (possible ? "YES\n" : "NO\n");
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
