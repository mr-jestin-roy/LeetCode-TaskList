#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e5;

typedef long long ll;

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, ll> m1;
        ll ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            ans += m1[arr[i]] * (ll(i + 1));
            m1[arr[i]] += ll(n - i);
        }
        cout << ans << endl;
    }
}