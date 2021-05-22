#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define mod 1000000007
#define fast
#define PI 3.14159265358979323846
#define MAX 1e5

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    ll ans = 1;
    int i = find(s.begin(), s.end(), '*') - s.begin();
    while (true)
    {
        int next_pos = i;
        for (int j = i + 1; j < n && j - i <= k; j++)
        {
            if (s[j] == '*')
            {
                next_pos = j;
            }
        }
        if (i == next_pos)
        {
            break;
        }

        i = next_pos;
        ans++;
    }

    cout << ans << endl;
}
int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}