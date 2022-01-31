#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
// #define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    long long int n,m,sum = 0;
    cin>>n>>m;
    long long int a[m];
    for(long long int i = 0;i<m;i++){cin>>a[i];}
    sum = a[0]-1;
    for(long long int i = 1;i<m;i++){
        if(a[i]>a[i-1]){sum+=a[i]-a[i-1];}
        else if(a[i]<a[i-1]){sum += a[i]+n-a[i-1];}
    }
    cout<<sum<<"\n";
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
