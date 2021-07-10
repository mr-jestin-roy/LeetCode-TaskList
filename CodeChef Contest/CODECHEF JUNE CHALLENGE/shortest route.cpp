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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int MAX = 1e9;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            mp[i] = 0;
        else if (a[i] != 0)
            mp[i] = 0;
        else
            mp[i] = MAX;
    }
    int right = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            right = i;
        if (right != -1)
        {
            if (a[i] == 0)
                mp[i] = min(mp[i], i - right);
        }
    }
    int left = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 2)
            left = i;
        if (left != -1)
        {
            if (a[i] == 0)
                mp[i] = min(mp[i], left - i);
        }
    }
    //OUTPUT FOR THIS APPROACH
    for (int i = 0; i < m; i++)
    {
        int j = b[i] - 1; //"-1" beacuse indexing starts from 0
        if (mp[j] != MAX)
            cout << mp[j] << " ";
        else
            cout << "-1"
                 << " ";
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