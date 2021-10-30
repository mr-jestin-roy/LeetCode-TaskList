#include <bits/stdc++.h>
using namespace std;
#define intt  long long int
#define F first
#define S second
#define pb push_back

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        
        int pos[2*n+5];
        
        int arr[n],brr[n];

        for(int i=0;i<n;i++)
        {
            int a;cin>>a;
            pos[a]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;   //for particular 
            pos[a]=i+1;
        }
        int ans=1e6;

        int swapme=1e6;
        
        for(int i = (2*n)-1;i>=0;i-=2)
        {
            swapme=min(swapme,pos[i+1]);    
            int temp=pos[i]-1;
            
            ans=min(ans,temp+swapme-1); 
        }
        cout<<ans<<endl;

        
    }
}