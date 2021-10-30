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
    cout << fixed << setprecision(20);

    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        int n; cin>>n;
        if(n==1)
            cout<<3<<endl;
        else if(n==2)
            cout<<33<<endl;
        else{
            cout<<3;
            for(int i=1;i <= n-2;i++){
                cout<<0;
            }
            cout<<3<<endl;
        }
    }
}

