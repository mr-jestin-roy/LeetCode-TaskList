#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define PI 3.14159265358979323846

int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int tx, ty;
        cin >> tx >> ty;
        int a, b;
        cin >> a >> b;

        int x = min(tx, ty), y = max(ty, tx);
        int cost = 0;

        if (2 * a < b)
        {
            cost += (2 * a) * x;
        }
        else
        {
            cost += b * x;
        }

        cost += (y - x) * a;

        cout << cost << endl;
    }
}