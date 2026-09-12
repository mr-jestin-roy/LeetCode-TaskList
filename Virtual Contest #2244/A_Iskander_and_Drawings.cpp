#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int max_len = 0;
    int current_len = 0;

    int i = n - 1;
    while (i >= 0)
    {
        current_len = (s[i] == '#') ? current_len + 1 : 0;
        max_len = max(max_len, current_len);
        i--;
    }

    cout << ((max_len + 1) >> 1) << "\n";
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
