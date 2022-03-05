// #include <bits/stdc++.h>
// using namespace std;
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
// #define int long long int
// #define mod 998244353
// #define endl "\n"
// #define inf 1e15



// int32_t main()
// {
//     fast;
//     cout << fixed << setprecision(20);
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(auto &i:v) cin>>i;
//     int ans = 0;
//     for (int i = 0; i < n;i++){
//         if(i==0){
//             ans += v[i] * v[i + 1];
//         }
//         else if(i==n-1){
//             ans += v[i];
//         }
//         else{
//             ans += (max(v[i - 1], v[i + 1]) * v[i] - min(v[i - 1], v[i + 1]));
//         }
//     }
//     cout << ans;
// }

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
    string s;
    cin >> s;
    
    if((s == "1" || s == "0" || s == "01"|| s == "10") && n<3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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