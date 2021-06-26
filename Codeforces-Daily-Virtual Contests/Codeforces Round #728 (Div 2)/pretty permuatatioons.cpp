// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"
int a[101];
void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
        if (i == n - 1)
            a[n - 1] = n;
    }
    for (int i = 0; i < n; i += 2)
    {
        swap(a[i], a[i + 1]);
    }
    if (n % 2 == 0)
    {

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {

        swap(a[n - 1], a[n - 2]);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
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