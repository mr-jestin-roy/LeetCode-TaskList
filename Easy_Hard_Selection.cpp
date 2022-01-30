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
    for(auto &i:a){
        cin >> i;
    }
    int cnt = 0;
    for(auto i : a){
        if(i == 1)
            cnt++;
    }
    if(cnt){
        cout << "HARD" << endl;
    }
    else
        cout << "EASY" << endl;
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
