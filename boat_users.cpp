#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18

void solve()
{
    string input;

    getline(cin, input );

    istringstream is( input );

    vector<int> v( (istream_iterator<int>( is ) ), istream_iterator<int>() );
    int sum =0;
    for(int i=0;i<v.size();i++){
        sum += v[i];
    }
    int n; cin>>n;
    int ans = sum/n + (sum%n != 0);
    cout<<ans<<endl;
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
