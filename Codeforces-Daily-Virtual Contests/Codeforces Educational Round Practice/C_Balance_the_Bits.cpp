#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
#define int long long int
bool is_balanced(const string &s)
{
    bool ok = true;
    int c = 0;
    for (auto &ch : s)
    {
        if (ch == '(')
        {
            c += 1;
        }
        else
        {
            c -= 1;
        }
        ok &= c >= 0;
    }
    ok &= c == 0;
    return ok;
}
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int c0 = count(s.begin(), s.end(), '0');
    int c1 = n - c0;

    string a(n, 0), b(n, 0);
    for (int i = 0, j = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (j < c1 / 2)
            {
                a[i] = b[i] = '(';
            }
            else
            {
                a[i] = b[i] = ')';
            }
            j += 1;
        }
    }
    for (int i = 0, j = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (j == 0)
            {
                a[i] = '(', b[i] = ')';
            }
            else
            {
                a[i] = ')', b[i] = '(';
            }
            j ^= 1;
        }
    }
    if (!is_balanced(a) || !is_balanced(b))
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        cout << a << '\n'
             << b << '\n';
    }
}

int32_t main()
{
    FAST;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}