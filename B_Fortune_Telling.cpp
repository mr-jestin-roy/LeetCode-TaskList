#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 1000000007
#define endl "\n"
#define inf 1e15

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        flag += x;
    }

    flag = flag & 1;

    if (flag)
    {
        if (x & 10)
        {
            if (y & 1)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
        else
        {
            if (y & 1)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
    }
    else
    {
        if (x & 1)
        {
            if (y & 1)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
        else
        {
            if (y & 1)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
    }
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}