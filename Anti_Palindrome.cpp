#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long 
#define mod 998244353
#define endl "\n"
#define inf 1e15
void solve()
{
    int n;
    string s;
    cin>>n>>s;

    sort(s.begin(), s.end());
    reverse(s.begin(), s.begin() + n / 2);

    string t = s;
    reverse(t.begin(), t.end());

    for (int i = 0; i < n;i++){
        if(s[i] == t[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    cout << s << endl;
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