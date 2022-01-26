#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a;
    int ind = 0;
    for (int i = 0; i < n;i++){
        if(ind == k)
            ind = 0;
        if(x > k){
            cout << -1 << endl;
            break;
        }
        if(ind == x)
            a.push_back(ind - 1);
        else{
            a.push_back(ind);
        }
        ind++;
        cout << a[i] << " ";
    }
    cout << endl;
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