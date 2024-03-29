#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
// #define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15
int arraySortedOrNot(vector<int> arr, int n)
{
    // Array has one or no element or the
    // rest are already checked and approved.
    if (n == 1 || n == 0)
        return 1;
 
    // Unsorted pair found (Equal values allowed)
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    // Last pair was sorted
    // Keep on checking
    return arraySortedOrNot(arr, n - 1);
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(auto &i : arr)
        cin >> i;

    int sum = 0LL;
    for (int i = 0;i<n;i++){
        int cnt = 0;
        for (int j = i; j < n;j++){
            if(!arr[j])
                cnt++;

            sum += j - i + cnt + 1;
        }
    }
    cout << sum << endl;
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