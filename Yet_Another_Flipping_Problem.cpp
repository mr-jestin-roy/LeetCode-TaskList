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
        int n,k,j;
        cin>>n>>k;
        
        if(k==0)
        {
            cout<<"YES"<<endl;
            cout<<0<<endl;
        }
        else if(k%2 != 0){
            double i = log2(k+1);
            j = (int)i;
            if(abs(i-j)==0){
                cout<<"YES"<<endl;
                for(j=0;j<i;j++)
                    cout<<pow(2,j)+1<<endl;
                cout<<1<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
           cout<<"NO"<<endl; 
    }
}