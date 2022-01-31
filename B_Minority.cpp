#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15


void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
     int ans = 0;

    
    for (int i = 0; i < s.size();i++){
        mp[s[i]]++;
        if(mp['1'] != mp['0'])
        ans = min(mp['1'],mp['0']);
    }
   

    
    cout << ans << endl;
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
