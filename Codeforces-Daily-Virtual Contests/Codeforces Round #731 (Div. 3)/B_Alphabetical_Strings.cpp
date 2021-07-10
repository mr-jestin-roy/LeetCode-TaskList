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
    string s;
    cin >> s;
    int N = s.size();
    vector<bool> alphabet(26, 0);

    for (char c : s)
    {
        alphabet[c - 'a'] = true;
    }

    for (int i = 0; i < N; i++)
    {
        if (alphabet[i] != true)
        {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i = 1; i < N - 1; i++)
    {
        if (s[i] > s[i - 1] && s[i] > s[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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