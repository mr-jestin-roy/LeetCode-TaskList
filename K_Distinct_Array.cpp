#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15


int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        int n, k;
        cin >> n >> k;
        vector<int> arr(1, 1);
        k -= n;

        int j = 2;

        for (int i = 2; i <= n; i++) {
            if (k < arr.size()) {
                int val = arr[arr.size()- k- 1];
                arr.push_back(val);
                break;
            }
            k -= arr.size();
            arr.push_back(j);
            j++;
        }

        while (arr.size() < n) {
            arr.push_back(arr.back());
        }

        for(auto x: arr){
            cout << x << " ";
        }cout << endl;
    }
}