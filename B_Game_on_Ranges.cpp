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
    
    vector<pair<int, int>> arr(n);

    for (int i = 0;i<n;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    for (int i = 0; i < n;i++){
        int l = arr[i].first, r = arr[i].second;
        int maxleft = -1;
        for (int j = 0; j < n;j++){
            if(l == arr[j].first && r > arr[j].second){
                maxleft = max(arr[j].second, maxleft);
            }
        
        }
        if(maxleft == -1){
            cout << l << " " << r << " " << l;
        }
        else{
            cout << l << " " << r << " " << maxleft + 1 ;
        }
        cout << endl;
    }
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