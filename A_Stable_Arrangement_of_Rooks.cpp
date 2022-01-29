#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
// #define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int n, k;
    cin >> n >> k;

    if(2*k > (n+1)){
        cout << -1 << endl;
        return;
    }
    else{
        vector<int> pos(n, 0);
        for (int i = 0; i < n && k > 0;i+=2,--k){
            pos[i] = 1;
        }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j && pos[i])
                    {
                        cout << "R";
                    }
                    else
                    {
                        cout << ".";
                    }
                }

                cout << endl;
            }
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
