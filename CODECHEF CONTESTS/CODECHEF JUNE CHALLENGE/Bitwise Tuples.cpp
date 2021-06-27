// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

//we have to handle integer overflow
/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(long long x, unsigned int y)
{
    int res = 1; // Initialize result

    x = x % mod; // Update x if it is more than or
                 // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % mod;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % mod;
    }
    return res;
}

int32_t main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = 0;
        int x = power(2, n) - 1;
        ans += power(x, m);

        cout << ans << endl;
    }
}