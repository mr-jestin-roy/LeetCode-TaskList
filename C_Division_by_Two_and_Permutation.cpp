#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15


void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    sort(a.begin(), a.end());
    bool found[n + 1];
    for (int i = 0; i < n+1;i++){
        found[i] = false;
    }
    for (int ai : a){
        while(ai > 1 && (ai > n || found[ai]))
            ai = ai / 2;

        if(ai > n || found[ai]){
            cout<<"NO"<<endl;
            return;
        }
        found[ai] = true;
    }
    //handled all edge cases 
    cout << "YES" << endl;
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