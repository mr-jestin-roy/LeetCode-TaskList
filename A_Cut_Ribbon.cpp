#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15
void solve()
{
    int n,m;
    cin >> n>>m;
    vector<int> a(m);

    for(auto &i : a){
        cin >> i;
    }

    int res = a[0];
    for (int i = 1; i < m;i++){
        int back = a[i - 1];
        if(a[i] >= back){
            res += (a[i] - back);
        }
        else{
            res += ((n - back) + a[i]);
        }

    }
    cout << res-1 << endl;
}


int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    // cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}