#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18

void solve()
{
    string s;
    cin>>s;

    vector<string> arr({"00","25","50","75"});

    int n =s.size();
    int low=n;
    for(int k=0;k<4;k++){
        int j=1,count=0,zero=0;
        for(int i=n-1;i>=0 && j>=0;i--)
        {
            if(s[i]==arr[k][j]){
                j--;
                continue;
            }
            if(j==1 && s[i]=='0')
                continue;
            count++;
        }
        if(j==-1){
            low = min(low,count+zero);
        }
    }
    cout<<low<<endl;
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
