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
    int n,l,r;
    cin >> n>>l>>r;


    vector<int> a(n);
    for(auto &x:a){
         cin>>x;
    }
    sort(all(a));
    int ans =0;
    for(int i=0;i<n;i++){
        int lx = l -a[i];
        int rx = r -a[i];
        ans += upper_bound(all(a),rx) - lower_bound(all(a),lx);
        if(2*a[i]>=l && 2*a[i]<=r)
            ans--;
    }
    ans/=2;
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