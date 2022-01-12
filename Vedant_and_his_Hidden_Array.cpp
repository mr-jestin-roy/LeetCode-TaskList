#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int n,a;
    cin >> n>>a;
    int rem = a % 2;
    int q = a / n;
    if(n==1){
        if(rem != 0){
            cout << "Odd" << endl;
        }
        else{
            cout << "Even" << endl;
        }
        return;
    }
    if(rem != 0){
        if(n%2==0){
            cout << "Even" << endl;
        }
        else{
            cout << "Odd" << endl;
        }
    }
    else{
        cout << "Impossible" << endl;
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