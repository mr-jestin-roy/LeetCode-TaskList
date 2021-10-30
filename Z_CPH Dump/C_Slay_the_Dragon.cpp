#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

void solve()
{
    int n; cin>>n;
    set<int> arr;
    int sum =0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.insert(x);
        sum += x;
    }
    int m; cin>>m;
    while(m--){
        int a,d; cin>>a>>d;
        auto it = arr.lower_bound(a);
        if(it == arr.begin())
        {
            cout<<max(d-sum + *it,(int)0)<<endl;
        }
        else if(it == arr.end())
        {
            it = prev(it);
            int temp = a - *it + max(d-sum+ *it,(int)0);
            cout<<max(temp,(int)0)<<endl;
        }
        else
        {
            auto it2 = prev(it);
            int temp = a - *it2 + max(d-sum + *it2,(int)0);
            cout<< max(min({d-sum + *it,temp}), (int)0)<<endl;
        }
    }
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
