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
    string t = "hello";
    cin >> s;
    int j = 0;
    if(s.size() < t.size()){
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < s.size();i++){
        if(s[i]==t[j]){
            j++;
        }
    }
    if(j == t.size()){
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
    // cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}
