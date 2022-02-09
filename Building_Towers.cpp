#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int x, m;
    cin >> x >> m;

    int i = 0, temp = 2;
    while(temp <=x){
        temp = temp << 1;
        i++;
    }
    temp /= 2;
    int one = i + 1;
    if(one > m){
        cout << 0 << endl;
        return;
    }
    if(temp == x){
        cout << (m - one) + 1 << endl;
        return;
    }
    cout << m - one << endl;
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