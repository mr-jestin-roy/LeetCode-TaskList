#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
int subtract(int x, int y)
{
    if (y == 0)
        return x;
    return subtract(x ^ y, (~x & y) << 1);
}
void solve()
{
    string s;
    cin>>s;
    int n = s.size();

    if((s[n-1]-'0')%2 == 0){
        cout << 0 << endl;
    }
    else if((s[0]-'0') %2 == 0){
        cout << 1 << endl;
    }
    else{
        for (int i = 0; i < n;i++){
            if((s[i]-'0') %2 == 0)
            {
                cout << 2 << endl;
                return;
            }
        }

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
