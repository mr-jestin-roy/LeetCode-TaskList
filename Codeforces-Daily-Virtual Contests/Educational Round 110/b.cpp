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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    sort(a.begin(), a.end(), [](int x, int y)
         { return x % 2 < y % 2; });
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            ans += __gcd(a[i], a[j] * 2) > 1;
        }
    }
    cout << ans << endl;
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