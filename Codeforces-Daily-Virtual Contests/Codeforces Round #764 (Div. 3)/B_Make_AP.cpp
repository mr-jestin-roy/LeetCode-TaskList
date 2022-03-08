#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    int d = 0;//common difference 
    int A = 2 * b - c;
    int B = (c + a) / 2;
    int C = 2 * b - a;
    if(A >= a && A%a ==0 && A!=0){
        cout << "YES" << endl;
        return;
    }
    
    if(B >= b && (c-a)%2==0 &&B%b ==0 && B!=0){
        cout << "YES" << endl;
        return;
    }

    if(C >= c && C%c ==0 && C!=0){
        cout << "YES" << endl;
        return;
    }
    
    
    
    cout << "NO" << endl;
    
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