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
    int n,l,r,k;
    cin >> n >> l >> r >> k;
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int count = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n;i++){
        if(arr[i] >= l && arr[i] <= r && k >= arr[i])
            {
                count++;
                k -= arr[i];
            }
        if(k==0){
            break;
        }
    }
    cout << count << endl;
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
