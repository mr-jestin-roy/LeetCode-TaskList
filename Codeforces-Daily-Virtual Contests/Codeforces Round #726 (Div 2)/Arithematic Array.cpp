// Created by Jestin Roy
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
    vector<int> a(n);
    int sum = 0;
    for (auto &x : a)
    {
        cin >> x;
        sum += x;
    }
    if (sum == n)
        cout << 0 << endl;
    else if (sum > n)
        cout << (sum - n) << endl;
    else
        cout << 0 << endl;
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