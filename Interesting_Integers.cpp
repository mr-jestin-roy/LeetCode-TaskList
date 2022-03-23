// Author: Jestin Roy
// Handle Name: jestinroy3
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define int long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define INF 1e18
bool found(int x)
{
    int sum = 0, product = 1;
    while (x > 0)
    {
        sum += (x % 10);
        product *= (x % 10);
        x /= 10;
    }
    return ((product % sum) == 0);
}
int helper(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (found(i))
        {
            ans++;
        }
    }
    return ans;
}
void solve()
{
    // start solving the problem from here on
    int a, b;
    cin >> a >> b;
    assert(b <= 1e6);
    cout << helper(b) - helper(a - 1) << endl;
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