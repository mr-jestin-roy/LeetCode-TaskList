#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e9 + 1

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        int n;
        cin >> n;

        int sum = n * (n + 1) / 2;
        int pos = 0;
        while((1<<pos) <= n){
            pos++;
        }
        int temp = (1 << (pos)) - 1;
        sum -= 2 * temp;

        cout << sum << endl;
    }
}