#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e9 + 1
void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for(auto &i: arr){
        cin >> i;
    }

    
    
    int a = x, b = x + 3;
    
    for(auto i: arr){
        // if((y - b)%i == 0 || b ^ y == i){
        //     cout << "Bob" << endl;
        //     break;
        // }
        // if((y - a)%i == 0 || a ^ y == i){
        //     cout << "Alice" << endl;
        //     break;
            
        // }
        
        // a ^= i;
        // b ^= i;
        cout << i << " ";
    }
    cout << endl;
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