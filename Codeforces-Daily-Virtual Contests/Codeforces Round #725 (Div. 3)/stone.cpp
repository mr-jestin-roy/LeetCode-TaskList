// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(a) (ll) a.size()
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;

    int mn = min_element(all(a)) - a.begin(); 
    int mx = max_element(all(a)) - a.begin();

    int ans = max(mn,mx) +1;

    ans = min(ans,max(n-mn-1,n-mx-1)+1); 
    ans = min(ans,min(mn,mx)+1+min(n-mn-1,n-mx-1)+1);

    cout<<ans<<endl; 
}
int32_t main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}