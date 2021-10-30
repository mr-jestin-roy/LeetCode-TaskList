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
        int a,b;
        cin>>a>>b;
        int pxor;
        if(a%4==1)  {pxor = a-1;}
        else if(a%4==2) {pxor = 1;}
        else if(a%4==3) {pxor = a;}
        else {pxor = 0;}

        if(pxor == b)
            cout<<a<<endl;
        else if((pxor^b) != a)  
            cout<<a+1<<endl;
        else
            cout<<a+2<<endl;
    }
}