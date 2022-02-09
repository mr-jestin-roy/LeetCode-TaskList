#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < n;i++){
        if(s[i] < s[i-1]){
            cout << "YES" << endl;
            cout << i << " " << i + 1 << endl;
            return;
        }
    }
        
    
    cout << "NO" << endl;
    
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