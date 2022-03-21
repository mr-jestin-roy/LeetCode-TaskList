// Author: Jestin Roy
// Handle Name: jestinroy3
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e15
#define all(x) (x).begin(), (x).end()

bool notPalindrome(string a)
{
    string b = a;
    reverse(all(b));
    return b != a;
}
int helper(string prev, int index, string &s, map<pair<int, string>, int> &dp)
{
    if (index == s.size())
    {
        return 1;
    }
    if (dp.find({index, prev}) != dp.end())
    {
        return dp[{index, prev}];
    }
    string x1 = prev.substr(1, 4);
    string x2 = prev.substr(1, 4);
    x1 += '0';
    x2 += '1';
    int ans = 0;
    if (s[index] == '?')
    {
        if (notPalindrome(x1) && notPalindrome(prev + "0"))
            ans += helper(x1, index + 1, s, dp);
        if (notPalindrome(x2) && notPalindrome(prev + "1"))
            ans += helper(x2, index + 1, s, dp);
    }
    else if (s[index] == '1')
    {
        if (notPalindrome(x2) && notPalindrome(prev + "1"))
            ans += helper(x2, index + 1, s, dp);
    }
    else
    {
        if (notPalindrome(x1) && notPalindrome(prev + "0"))
            ans += helper(x1, index + 1, s, dp);
    }
    dp[{index, prev}] = ans;
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<pair<int, string>, int> dp;
    cout << (helper("?????", 0, s, dp) ? "POSSIBLE" : "IMPOSSIBLE") << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++)
    {
        cout << "Case #" << caseNum << ": ";
        solve();
    }
}