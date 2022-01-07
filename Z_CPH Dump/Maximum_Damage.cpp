#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

void solve()
{
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   for(int i=0;i<n;i++){
       if(i==0){
           cout<<(a[i]&a[i+1])<<" ";
       }
       else if(i==n-1)
            cout<<(a[i]&a[i-1])<<" ";
       else
        cout<<max(a[i]&a[i+1],a[i]&a[i-1])<<" ";

   }

    cout<<endl;

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
