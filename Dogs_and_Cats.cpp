#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e15

void solve()
{
    int n,d,c,m;
    cin>>n>>d>>c>>m;
    string s;
    cin>>s;
    int countD =0,countC =0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='D')
            countD++;
        else
        countC++;
    }
    if(countD > d)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='D')
         {
             d--;
             countD--;
             c += m;
             if(d==0 && countD>0){
                 cout<<"NO"<<endl;
                 return;
             } 
         }
        else
        {
            if(c==0 && countD>0){
                 cout<<"NO"<<endl;
                 return;
             }
             
            c--;
        }
    }
    cout<<"YES"<<endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++)
    {
        cout << "Case #" << caseNum << ": ";
        solve();
    }
}