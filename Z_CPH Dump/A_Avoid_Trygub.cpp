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
    vector<char> arr(n);
    for(auto &x:arr)
        cin >> x;
    sort(arr.begin(), arr.end());
    for(auto x: arr){
        cout << x;
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
