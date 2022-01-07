#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        if(i%3==0)
            cout<<"Tom";
        if(i%5==0){
            cout<<"Jerry";
        }
        if(i%3 !=0 && i%5 != 0)
            cout<<i;

    cout<<endl;
    }

}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    // cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}
