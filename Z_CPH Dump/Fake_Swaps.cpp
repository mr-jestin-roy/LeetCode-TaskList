#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846


void solve(){
        int n;
        cin>>n;

        string s;
        string p;
        cin >> s>>p;
        int x = s.compare(p);
        if(x==0){
            cout<<"YES"<<endl;
            return;
        }
        int sone=0,seven=0,pone=0,peven=0;
        for (int i = 0; i < n;i++)
        {
                if(s[i] == '0')
                    seven++;
                else
                    sone++;
                if(p[i] == '0')
                    peven++;
                else
                    pone++;
        }
        if(peven && pone)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


}
int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}


        // int n;
        // cin>>n;
        // string s;
        // string p;
        // cin >> s>>p;
        // int one =0,even=0;
        
        // for (int i = 0; i < n;i++)
        // {
        //     if(s[i] != p[i]){
        //         if(s[i] == '1')
        //             even++;
        //         else
        //             one++;
        //     }
        // }
        // if(one == 0 || even == 0 )
        //     cout<<"YES"<<endl;
        // else
        // {
        //     if((one+even) > 3)
        //     {
        //         cout<<"NO"<<endl;
        //         break;
        //     }
        //     else{
        //         cout<<"YES"<<endl;
        //     }
        // }
        