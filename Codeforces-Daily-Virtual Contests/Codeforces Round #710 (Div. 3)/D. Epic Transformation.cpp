#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        count[x]++;
    }
    int maxres = 0;
    for (auto &[x, c] : count)
    {
        maxres = max(maxres, c);
    }
    cout << (2 * maxres <= n ? (n % 2) : 2 * maxres - n) << endl;
}
int32_t main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}