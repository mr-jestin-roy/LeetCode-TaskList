#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
#define int long long int

void solve()
{
    int n;
    cin >> n;
    string ta, tb;
    cin >> ta >> tb;
    vector<int> pref0(n), pref1(n);
    pref0[0] = (ta[0] == '0');
    pref1[0] = (ta[0] == '1');
    for (int i = 1; i < n; i++)
    {
        pref0[i] = pref0[i - 1] + (ta[i] == '0');
        pref1[i] = pref1[i - 1] + (ta[i] == '1');
    }
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (cnt % 2 == 0)
        {
            if (ta[i] == tb[i])
            {
                continue;
            }
            else
            {
                if (pref0[i] != pref1[i])
                {
                    cout << "NO" << endl;
                    return;
                }
                else
                {
                    cnt++;
                }
            }
        }
        else
        {
            if (ta[i] != tb[i])
            {
                continue;
            }
            else
            {
                if (pref0[i] != pref1[i])
                {
                    cout << "NO" << endl;
                    return;
                }
                else
                {
                    cnt++;
                }
            }
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    FAST;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}