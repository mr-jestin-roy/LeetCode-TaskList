#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int sum;
    cin >> sum;
    sum *= 3;
    for (int i = 1;i<=3;i++){
        if(i==3){
            cout << sum << endl;//remaining sum
        }
        else{
            cout << i << " ";
            sum = sum - i; //update the sum 
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