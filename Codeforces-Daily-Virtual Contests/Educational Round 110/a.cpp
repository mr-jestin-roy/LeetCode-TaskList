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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (max(a, b) > max(c, d))
    {
        if (min(a, b) > max(c, d))
        {
            cout << "NO" << endl;
            return;
        }
    }
    else
    {
        if (max(a, b) > min(c, d))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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