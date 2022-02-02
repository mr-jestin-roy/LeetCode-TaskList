#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long 
#define mod 998244353
#define endl "\n"
#define inf 1e15
void solve()
{
    int x,a,b;
    cin >> x >> a >> b;

    if(x%a != 0 || b > a){
        cout << -1 << endl;
        return;
    }
    b = b * (x / a);
    //we can the get the number n as X*B/A.
    //But, we have to check that this n yields the same sum of
    // the divisors as given input X, which will require O(sqrt(n)) time.
    int sum = 0;
    for (int i = 1; i * i <= b;i++)
    {
        if(b % i != 0)
            continue;
        if(i*i == b){
            sum += i;
        }           
        else{
            sum += i + b / i;
        }
    }

    if(sum == x){
        cout << b << endl;
    }
    else{
        cout << -1 << endl;
    }
    //easier alternative code inspired from Utkarsh Gupta Videp
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