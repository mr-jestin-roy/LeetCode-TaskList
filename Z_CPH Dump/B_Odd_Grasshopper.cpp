#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18

void solve()
{
    ll a,n;
    cin>>a>>n;
    ll i = (n/4)*4;
    for(;i<n;i++){
        
        if(a%2==0){
            a -= i+1;
        }
        else{
            a += i+1;
        }
    }
        cout<<a<<endl;
       
    
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
