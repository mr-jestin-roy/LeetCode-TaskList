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
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int pos = max_element(arr.begin(), arr.end()) - arr.begin();
    if(pos != 0 && pos!= n-1){
        cout << -1 << endl;
        return;
    }
    deque<int> dq;
    int l = 0, r = n - 1;
    while(l <= r){
        if(arr[l]<arr[r]){
            dq.push_front(arr[l++]);
        }
        else{
            dq.push_back(arr[r--]);
        }
    }
    for(auto i : dq){
        cout << i << " ";
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
