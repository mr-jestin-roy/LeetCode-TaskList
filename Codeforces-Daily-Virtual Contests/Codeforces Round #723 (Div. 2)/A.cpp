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
    int i=0;
    while (t--)
    {
        int n;
        cin>>n;
        int digit =0;
        // while(n>0){
        //     digit++;
        //     n/=10;
        // }
        for (int i = 1; i <= n; i = (i*10 +1)) {
            digit = i;
        
        }
        while(n>11){
            n = n%digit;
            digit/=10;
        }
        if(n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}