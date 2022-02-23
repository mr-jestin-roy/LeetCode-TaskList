#pragma GCC optimize("Ofast")//Comment optimisations for interactive problems (use endl)
#include "bits/stdc++.h"
using namespace std;
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{//you can solve using a freq counter array too & need to keep track of the changes in each element of the 4 size arrat

    int n;
    cin>>n;
    int t,a=0,b=0,c=0,d=0;
    for (int i = 0; i < n;i++){
        cin >> t;
        if(t==1)
            a++;
        else if(t==2)
            b++;
        else if(t==3)
            c++;
        else
            d++;
    }

    d += c + (b + 1) / 2;
    if(b%2)
    {
        a -= 2; //2 and 1 + 1 pairs
    }
    a -= c; //3 &1  pairs
    if(a > 0){
        //combining the remaining "1s" in the sep taxis
        d += a / 4 + (a % 4 != 0);
    }

    cout << d << endl;
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