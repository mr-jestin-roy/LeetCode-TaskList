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
    vector<int> arr(n);

    for(auto &x:arr) cin>>x;
    int mxcnt = 0;
    int cnt0 =0;
    for (int i = 0; i<n;i++){
        if(arr[i]==0){
            cnt0++;
        }
        if(cnt0 == 2){
            cout <<-1 << endl;
            return;
        }
        if(arr[i]==1){
            mxcnt = max(mxcnt, cnt0);
            cnt0 = 0;
        }
    }
    int ans = 1;
    if(mxcnt >= 2){
        cout <<-1 << endl;
        return;
    }
    else{
        for (int i = 0; i < n;i++){
            if(arr[i]==1){
                if(arr[i-1]==1 && i>0){
                    ans += 5;
                }
                else{
                    ans += 1;
                }
            }
        }
        cout <<ans<< endl;
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