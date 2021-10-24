#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846


int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int ans =0;
      int n,k;
      cin>>n>>k;
      
      ans += (2*n-k-1)/2;
      ans *= 2;
      cout<<ans<<endl;
    }
}