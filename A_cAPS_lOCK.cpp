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
{
    string s;
    cin >> s;
    int flag = 0;
 
    for (int i = 1; i < s.length(); i++) {
        if (s[i] < 'A' or s[i] > 'Z') {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' and s[i] <= 'Z')
                s[i] = s[i] + 'a' - 'A';
            else
                s[i] = s[i] + 'A' - 'a';
        }
    }
    cout << s<<endl;
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