#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

//editorial ans

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tests;
    cin >> tests;
    while (tests--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        if (n < m)
            swap(n, m);

        if (n == 1 || m == 1)
        {
            cout << (n + m - 2) * x << endl;
        }
        else if (y < x)
        {
            if (n % 2 == m % 2)
                cout << (n - 1) * y << endl;
            else
                cout << (n - 2) * y + x << endl;
        }
        else if (y < 2 * x)
        {
            cout << (m - 1) * y + (n - m) * x << endl;
        }
        else
        {
            cout << (n + m - 2) * x << endl;
        }
    }
    return 0;
}