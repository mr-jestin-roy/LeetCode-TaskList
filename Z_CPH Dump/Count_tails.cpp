#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k%n;
    reverse(nums.begin(),nums.begin()+(n-k));
    reverse(nums.begin()+(n-k),nums.begin()+n);
    reverse(nums.begin(),nums.end());    
}
pair<int, int> flipcoins(char s, int N)
{
    
    pair<int, int>p;
    if(s == 'H')
    {
        p.first = floor(N / 2.0);
        p.second = ceil(N / 2.0);
    }

    else if(s == 'T')
    {
        p.first = ceil(N / 2.0);
        p.second = floor(N / 2.0);
    }
     
    return p;
}
void solve()
{
    int n;
    cin>>n;
    char c = 'H';
    pair<int,int> ans = flipcoins(c,n);
    cout<<int(ceil(n/2.0)) <<endl;

    
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

