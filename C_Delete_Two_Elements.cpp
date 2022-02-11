#pragma GCC optimize("Ofast")
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
    cin>>n;
    int sum =0;
    vector<int> arr(n);

    for(int i=0; i<n;i++){
        cin>>arr[i];
        sum += arr[i];
        arr[i] *= n;
    }

    map<int, int> hash;

    for(auto i:arr){
        hash[i - sum]++;
    }

    int zero = (hash[0] * (hash[0] - 1)) / 2;
    int total = 0;
    for (int i = 0; i < n;i++){
        if(arr[i] < sum) //change
        {
            total += hash[abs(arr[i] - sum)];
        }
    }
    total += zero;
    cout << total << endl;
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