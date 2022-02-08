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
        int n, m, k;
        cin >> n >> m >> k;
        if (m <= n / k)
        {
            cout << m << endl;
        }
        else
        {
            int add = ((m - n / k) % (k - 1)) ? 1 : 0;
            int ans = n / k - ((m - n / k) / (k - 1) + add);
            cout << ans << endl;
        }
    }
}