#include "bits/stdc++.h"
using namespace std;
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int n;
    cin>>n;
    int sum = 0, cnt = 0;
    vector<int> arr(n);
    for(auto &i : arr){
        cin >> i;
        sum += i;
    }
    sort(all(arr));
    int x = 0, j = n - 1;
    while(sum >= x){
        sum -= arr[j];
        x += arr[j];
        j--;
        cnt++;
    }

    cout << cnt << endl;
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