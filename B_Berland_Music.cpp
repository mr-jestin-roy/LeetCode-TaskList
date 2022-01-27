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
    cin>>n;
    vector<int> p(n);
    for (int i = 0; i < n;i++){
        cin >> p[i];
    }
    vector<int> good;
    vector<int> bad;
    string s;
    cin >> s;

    for (int i = 0; i < n;i++){
        if(s[i]=='0')
            bad.push_back(p[i]);
        else
            good.push_back(p[i]);
    }
    sort(bad.begin(), bad.end());
    sort(good.begin(), good.end());

    int ans[n];
    for(int i=0 ; i<n ; i++){
        if(s[i]=='0'){
            int pos = lower_bound(bad.begin(), bad.end(), p[i]) - bad.begin();
            ans[i] = 1+pos;
        } 
        else {
            int pos = lower_bound(good.begin(), good.end(), p[i]) - good.begin();
            ans[i] = bad.size()+1+pos;
        }
    }
    //printing the answers
    for (int i = 0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
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