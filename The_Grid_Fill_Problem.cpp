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
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                a[i][j] = -1;
        }
        if(n%2 != 0){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
             {
                 if((i+j)%2 != 0)
                    a[i][j] = 1;
             }   
        }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;

    }
}