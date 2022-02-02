#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long 
#define mod 998244353
#define endl "\n"
#define inf 1e15
void solve()
{
    int x;
    cin >> x;
    
    // cout << "ANS is " << ans << endl;
    // if(x == ans && x > 2){
    //     cout << x-2<<" "<<x-1<<" "<<x << endl;
    //     return;
    // }
    // if(x ==2){
    //     cout << 2<<" "<< 3 <<" "<< 4 << endl;
    //     return;
    // }
    int a = x, b = 0, c = x;
    for (int i = 0; i < 31;i++){
        if(!(c&((int)1<<i))){
            c = c | ((int)1 << i);
            break;
        }
    }
    int ans = (a | b) & (b | c) & (c | a);
    if(ans == x){
        cout << a << " " << b << " " << c << endl;
        return;
    }
    cout << -1 << endl;
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