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
    vector<int> arr(n);

    for(auto &i : arr){
        cin >> i;
    }

    bool flag = false;
    for (int i = 1;i<n;i++){
        if(arr[i-1] > arr[i]){
            flag = true;
            break;
        }
    }

    if(!flag){
        //already sorted array
        //no need for operation
        cout << 0 << endl;
        return;
    }
    if(arr[n-2] > arr[n-1] || arr[n-1] < 0){
        cout << -1 << endl;
        //these are the edge cases 
        return;
    }
    //we have n-2 operations then
    cout << n - 2 << endl;

    for (int i = n - 3; i >= 0;i--)
    {
        cout << i + 1 << " " << n - 1 << " " << n << endl;
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