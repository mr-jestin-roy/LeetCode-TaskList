#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15
void solve()
{
    int x,y;// y is affected ppl
    cin>>x>>y;
    int notaffected = x - y;
    if(y ==0){
        cout << notaffected << endl;
        return;
    }
    if(notaffected == 0){
        cout << 2 * y - 1 << endl;
        return;
    }

    cout << 2 * y + notaffected << endl;
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