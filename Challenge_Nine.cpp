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
    string s;
    cin >> s;
    int sum = 0, n = s.size();
    for (int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }
    vector<string> ans;
    for (int i = 0; i <= 9; i++)
    {
        if (((sum + i) % 9) == 0)
        {
            bool found = false;
            for (int j = (i != 0 ? 0 : 1); j < n; j++)
            {
                if (s[j] - '0' > i)
                {
                    string a = s.substr(0, j);
                    a += char(i + '0');
                    a += s.substr(j, n - j);
                    ans.push_back(a);
                    found = true;
                    break;
                }
            }
            if (!found) /// you didn't add anything
            {
                string a = s;
                a += char(i + '0');
                ans.push_back(a);
            }
        }
    }
    sort(ans.begin(), ans.end());
    // lexographically smallest string that can be formed
    cout << ans[0] << endl;
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