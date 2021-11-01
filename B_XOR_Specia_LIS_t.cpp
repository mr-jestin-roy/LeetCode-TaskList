#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
 
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            cout << "YES" << endl;
            return;
        }
    }
 
    cout << "NO" << endl;

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
