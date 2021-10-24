#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
//GCD
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

//LCM
int lcm(int a,int b){
    return (a/gcd(a,b))*b;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
      int x,k;
      cin>>x>>k;
      int upperlimit = x*k;
      int ans =0;
      cout<<lcm(x,2*x)<<" "<<lcm(upperlimit-1,upperlimit)<<endl;  
    }
}