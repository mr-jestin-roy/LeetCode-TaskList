// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

pair<int, int> getRatio(int a, int b)
{
    int g = __gcd(a, b);
    a /= g;
    b /= g;
    return {a, b};
}
void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int d = 0, k = 0;
    map<pair<int, int>, int> mp;
    for (char c : s)
    {
        if (c == 'D')
            d++;
        else
            k++;
        cout << ++mp[getRatio(d, k)] << " ";
    }
    cout << endl;
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
        solve();
    }
}