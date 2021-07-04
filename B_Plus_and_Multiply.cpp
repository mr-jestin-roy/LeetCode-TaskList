// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(a) (ll) a.size()
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

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
        ll n, a, b;
        cin >> n >> a >> b;
        if (b == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        if (a == 1)
        {
            if ((n - 1) % b == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            continue;
        }
        vector<ll> v;
        v.push_back(1);
        //runs for O(32) = O(logN)
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i] * a <= 1e9)
            {
                v.push_back(v[i] * a);
            }
        }
        ll flag = 0;
        //runs for O(32) = O(logN)
        for (auto it : v)
        {
            if (n >= it && ((n - it) % b) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}