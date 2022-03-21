// Author: Jestin Roy
// Handle Name: jestinroy3
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e15

void solve()
{
    // start solving the problem from here on
    string s, p;
    cin >> s >> p;
    // using two pointer method
    int i = 0, j = 0;
    while (i < s.size() && j < p.size())
    {
        if (s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    if (i == s.size())
        cout << p.size() - s.size() << endl;
    else
        cout << "IMPOSSIBLE" << endl;
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