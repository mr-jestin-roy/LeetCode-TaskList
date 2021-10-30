#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18

void solve()
{
    int n;
    cin>>n;
    
    vector<vector<int>> arr(n,vector<int>(5));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
            cin>>arr[i][j];
    }

    for(int i=0;i<4;i++)
    {
        for(int j=i+1; j<5;j++)
        {
            int one =0, two =0,both =0;
            for(int k=0;k<n;k++){
                if(arr[k][i]==1 && arr[k][j] == 1)
                    both++;
                else if(arr[k][i] == 1)
                    one++;
                else if(arr[k][j] == 1)
                    two++;
            }
            if((both+one+two) == n && one <= n/2 && two <=n/2){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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