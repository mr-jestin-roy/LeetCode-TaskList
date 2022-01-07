#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    sort(a.begin(),a.end());
    int cnt=0;
    int ans =0;
    for(int i=0;i<n;i++){
        cnt++;
        if(i+1 < n && a[i]==a[i+1])
            continue;
        if(i+1 > n-i-1) 
            ans += cnt;
        cnt=0;
    }
    cout<<ans<<endl;

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
