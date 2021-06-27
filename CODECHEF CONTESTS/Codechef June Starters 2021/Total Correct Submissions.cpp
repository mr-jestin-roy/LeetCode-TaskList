#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl "\n"
#define mod 1000000007
// #define int long long
#define fast
#define PI 3.14159265358979323846
#define MAX 1e5

void solve()
{
    unordered_map<string, int> mpp;

    int n;
    cin >> n;
    for (int i = 0; i < 3 * n; i++)
    {
        string s;
        int temp;
        cin >> s >> temp;
        if (mpp.find(s) != mpp.end())
        {
            mpp[s] += temp;
        }
        else
        {
            mpp.insert({s, temp});
        }
    }
    vector<int> a;
    for (auto &i : mpp)
        a.push_back(i.second);

    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}