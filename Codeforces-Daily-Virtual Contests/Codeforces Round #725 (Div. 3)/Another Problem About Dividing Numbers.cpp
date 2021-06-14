// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(a) (ll) a.size()
// #define int long long int
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
        int a, b, k;
        cin >> a >> b >> k;
        if (a > b)
            swap(a, b);
        if (k == 1)
        {
            if (b % a == 0 && (b != a))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            int cnt1 = 0;
            for (int i = 2; i * i <= a; i++) //count factors of a from 2 to sqrt(a)
            {
                while (a % i == 0)
                {
                    cnt1++;
                    a /= i;
                }
            }
            if (a > 1)
                cnt1++;

            int cnt2 = 0;
            for (int i = 2; i * i <= b; i++) //count factors of b from 2 to sqrt(b)
            {
                while (b % i == 0)
                {
                    cnt2++;
                    b /= i;
                }
            }
            if (b > 1)
                cnt2++;

            if (cnt1 + cnt2 >= k)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}