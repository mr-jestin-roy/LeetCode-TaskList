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
        string s;cin>>s;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int cc=s[i]-'0';
            if(cc)
            {
                ans+=cc;
                if(i<n-1)
                    ans+=1;
            }
        }
        cout<<ans<<endl;
    }
}
