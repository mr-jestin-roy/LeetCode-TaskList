// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    unordered_map<int,int> mpp;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        mpp[a[i]] = i;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mpp.find(a[i] - mpp[a[i]]/a[]) != mpp.end())
            {
                ans.push_back(mpp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
    }
    cout << cnt << endl;
}
int32_t main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
