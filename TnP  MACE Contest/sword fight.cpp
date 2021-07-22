#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
#define int long long
#define n = 2e17;

int32_t main()
{
    FAST;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == (x & i))
            {
                a[i] = a[i] - y;
            }
            if (a[i] > 0)
            {
                res++;
            }
        }

        cout << res << endl;
    }
}