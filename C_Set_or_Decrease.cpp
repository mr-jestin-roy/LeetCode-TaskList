#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr + 3);

    if(arr[2] == (arr[0]+arr[1]) || (arr[0]== arr[1] && arr[2]%2==0) || (arr[1]==arr[2] && arr[0]%2==0)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO"<< endl;
        
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