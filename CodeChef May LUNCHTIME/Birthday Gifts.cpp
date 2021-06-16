#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long int

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll &x : a)
        {
            cin >> x;
        }
        sort(a.begin(), a.end());
        ll sum1 = 0, sum2 = 0;
        while (k--)
        {
            sum1 += a.back();
            a.pop_back();
            sum2 += a.back();
            a.pop_back();
        }
        sum2 += a.back();
        cout << max(sum1, sum2) << endl;
    }
    return 0;
}
