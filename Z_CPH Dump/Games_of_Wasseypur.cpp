#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

void solve()
{
   int n; cin>>n;
   string s; cin>>s; 
   char temp=s[0];
   int count=1; 
   for(int i=0;i<n;i++)
   {
       if(s[i]!=temp) 
       {temp=s[i];
        count++;
        }
   }
    if(count==1) cout << "SAHID";
    else if(count==2) cout << "RAMADHIR";
    else
    {
        if(count%3==0) cout << "SAHID";
        else if(count%3==1) cout << "SAHID";
        else cout << "RAMADHIR";
    }
    cout<<endl;

}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);

    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}
