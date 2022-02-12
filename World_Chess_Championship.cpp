#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int x;
    cin >> x;
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> m;
    for (int i = 0; i < n;i++){
        m[s[i]]++;
    }
    int carl = m['C'], chef = m['N'];
    carl += m['D'];
    chef += m['D'];
    if(carl == chef){
        cout << 55 * x << endl;
        return;
    }

    if(carl > chef){
        cout << 60 * x << endl;
        return;
    }

    cout << 40 * x << endl;
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



