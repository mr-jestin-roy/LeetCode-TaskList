// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(a) (ll) a.size()

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

int main()
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
        ll n;
        cin >> n;
        ll res = 0;
        for (ll x = 1, i = 1; x <= n; i++)
        {
            res = (res + n / x) % mod;
            x = lcm(i, x); //stl function for lcm from i to x
        }
        cout << res << endl;
    }
    return 0;
}