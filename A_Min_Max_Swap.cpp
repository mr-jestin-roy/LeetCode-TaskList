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
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    for(int i=0;i<n;i++){
       if(a[i] < b[i]){
           int temp = a[i];
           a[i] = b[i];
           b[i] = temp;
       }
    }

    int ans = *max_element(a.begin(),a.end()) * *max_element(b.begin(),b.end()) ;
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