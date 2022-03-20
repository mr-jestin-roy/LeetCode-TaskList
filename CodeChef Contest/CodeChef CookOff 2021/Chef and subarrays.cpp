#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl "\n"
#define mod 1000000007
#define fast
#define PI 3.14159265358979323846
#define MAX 1e5

// TRY NAHI KIYA CODEHEF MAY COOK OFF

void solve()
{
    ll n, m, x;
    cin >> n >> m >> x;
    x -= 1;
    ll c = x / n;
    ll r = x % n;
    ll ans = (r * m) + c + 1;
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