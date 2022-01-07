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
    int ans =0;
    int a,b,c;
    cin>>a>>b>>c;
    int temp = (a+c - 2*b);
    if(temp%3){
        cout<<1<<endl;
    }
    else    
        cout<<0<<endl;

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
