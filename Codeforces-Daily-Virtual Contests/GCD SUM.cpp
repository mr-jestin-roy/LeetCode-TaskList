#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"
#define int long long int

// #TIME LIMIT EXCEEDED ON THE PREVIOUS LOGIC
// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     if (b == 0)
//         return a;
//     //base case
//     if (a == b)
//         return a;
//     if (a > b)
//         return gcd(a - b, b);

//     return gcd(a, b - a);
// }
// void solve()
// {
//     ll n;
//     cin >> n;
//     int ans;
//     for (int i = n; i >= n; i++)
//     {
//         int SumOfDigit = 0;
//         int temp = i;
//         while (temp != 0)
//         {
//             SumOfDigit += temp % 10;
//             temp /= 10;
//         }
//         if (gcd(i, SumOfDigit) > 1)
//         {
//             ans = i;
//             break;
//         }
//     }
//     cout << ans << endl;
// }
ll gcd(ll x, ll y)
{
    return y == 0 ? x : gcd(y, x % y);
}

ll getSum(ll x)
{
    ll s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int32_t main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        while (gcd(x, getSum(x)) == 1)
            x++;
        cout << x << endl;
    }
}