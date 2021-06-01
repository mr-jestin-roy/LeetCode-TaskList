#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"


int32_t main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+2*n);
        int i=0;
        int j = 2*n - 1;
        for(int k =0;k<n;k++){
            cout<<a[i++]<<" "<<a[j--]<<" ";
        }
        cout<<endl;
    }
}