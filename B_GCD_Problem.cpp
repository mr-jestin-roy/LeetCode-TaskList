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
    
    if(n%2 ==0){
        cout << n / 2 << " " << n / 2 - 1 << " " << 1 << endl;
    }
    else{
        if(((n-1)/2)%2 == 0){
            cout << (n - 1) / 2 - 1 << " " << (n - 1) / 2 + 1 << " " << 1 << endl;
        }
        else{
            cout << (n - 1) / 2 - 2 << " " << (n - 1) / 2 + 2 << " " << 1 << endl;
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