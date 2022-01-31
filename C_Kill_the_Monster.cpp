#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15


void solve()
{
    int ha, da, hm, dm;
    cin >> ha >> da >> hm >> dm;
    int k, w, a;
    cin >> k >> w >> a;
    int strikeA = 0, strikeM = 0;
    if(hm > da){
        da += k * w;
        strikeA = hm / da;
    }
    else if(ha < dm){
        ha = k * a;
        strikeM = ha / dm;
    }
    
    while(hm > 0 || ha > 0){
        strikeA = hm / da;
        strikeM = ha / dm;
        hm -= da;
        if(hm <= 0){
           cout << "YES" << endl;
           return;
        }
        ha -= dm;
        if(ha <= 0){
            cout << "NO" << endl;
            return;
        }
        if(strikeA < strikeM){
        cout << "YES" << endl;
        return;
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
