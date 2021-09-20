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
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
          
    if(n>4){ 
        cout<<"NO"<<endl; 
        
    } 
    else{
        cout<<"YES"<<endl; 
    for(int i=0;i<n;i++){ 
        if(i%4==0) 
            cout<<arr[i]<<" 0\n"; 
        else if(i%4==1) 
            cout<<"0 "<<arr[i]<<endl; 
        else if(i%4==2) 
            cout<<-arr[i]<<" 0\n"; 
        else 
            cout<<"0 "<<-arr[i]<<endl; 
    } 
    }
    }
}