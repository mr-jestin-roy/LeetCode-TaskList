#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl "\n"
#define mod 1000000007
#define fast
#define PI 3.14159265358979323846
#define MAX 1e5
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;
    for (int i = 0, j1 = 0, j2 = 0; i < n; ++i)
    {
        j1 = max(j1, i);
        j2 = max(j2, i);
        while (j1 < n && (s[j1] == '?' || s[j1] - '0' == j1 % 2))
            ++j1;
        while (j2 < n && (s[j2] == '?' || s[j2] - '0' == ((j2 + 1) % 2)))
            ++j2;
        ans += max(j1, j2) - i;
        //cout << j1 << " " << j2 << "\n";
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}