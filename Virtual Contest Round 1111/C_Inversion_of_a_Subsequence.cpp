#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    int i = n - 1;
    while (i >= 0)
    {
        char c;
        cin >> c;
        a[i] = c - '0';
        i--;
    }
    i = n - 1;
    while (i >= 0)
    {
        char c;
        cin >> c;
        b[i] = c - '0';
        i--;
    }

    int mismatches = 0, c = 0, out0 = 0, out1 = 0;

    i = n - 1;
    while (i >= 0)
    {
        bool eq = (a[i] == b[i]);
        mismatches += !eq;
        c += (!eq) * (a[i] == 1);
        out0 += eq * (a[i] == 0);
        out1 += eq * (a[i] == 1);
        i--;
    }

    if (mismatches == 0)
        cout << 0 << "\n";
    else if (c > 0)
        cout << (c % 2 != 0 ? 1 : 2) << "\n";
    else
        cout << (out0 > 0 && out1 > 0 ? 2 : -1) << "\n";
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
