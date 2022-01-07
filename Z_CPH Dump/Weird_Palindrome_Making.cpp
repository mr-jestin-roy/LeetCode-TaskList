#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a){
        cin>>x;
    }
    int cnt=0;
    for(auto x:a){
        if(x%2 !=0){
            cnt++;
        }
    }
    cout<<cnt/2  <<endl;
       
    
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
