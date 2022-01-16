#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

int findTheWinner(int n, int k) {
        int res = 0;
        for (int i = 1; i <= n; ++i)
            res = (res + k) % i;
        return res + 1;
}
void solve()
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    
    int a[n+1][m+1];

    int cntB = 0;
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1;j <= m;j++)
        {
            a[i][j] = 0;
            char c;
            cin >> c;
            if(c == 'B'){
                a[i][j] = 1;
                a[0][j] = 1;
                a[i][0] = 1;
                cntB++;
            }
        }
        
    }
    
    
    if(cntB > 0){   //white
        int ans = 2;
        if(a[r][c]==1){
            cout << 0 << endl;
            return;
        }
            
        if(a[0][c]==1){
            ans = 1;
        }
        if(a[r][0]==1){
            ans =1;
        }
        cout << ans << endl;
        // for (int i = 1; i <= n;i++)
        // {
        //     for (int j = 1;j <= m;j++)
        //     {
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }
    else{
        cout << -1 << endl;
    }
    
   
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