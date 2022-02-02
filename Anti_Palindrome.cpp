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
    cin >> n;

    string s;
    cin >> s;

    if(n&1){
        cout << "NO" << endl;
        return;
    }
    vector<int> v(26, 0);
    for (int i = 0; i < n;i++){
        v[s[i] - 'a']++;
    }
    for(auto i:v){
        if(i > n/2){
            cout << "NO" << endl;
            return;
        }
    }
    int itr1 = (n / 2), itr2 = (n / 2) - 1;
    sort(s.begin(), s.end());
    while(s[n/2]==s[itr1]){
        itr1++;
    }
    int sz1 = itr1 - (n / 2);
    string sub = s.substr((n / 2), sz1);
    cout << "YES" << endl;
    for (int i = 0; i < (n / 2);i++){
        cout << s[i];
    }
    for (int i = itr1; i < n;i++){
        cout << s[i];
    }
    cout << sub << endl;
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