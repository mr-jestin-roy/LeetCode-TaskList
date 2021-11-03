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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans =1;
    for (int i=0; i<s.length()-1; i++)
    {
            if (s[i] != s[i+1]){
                ans +=1;
                
            }                    
    }
    (ans%2==0)?cout<<"RAMADHIR":cout<<"SAHID";
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
