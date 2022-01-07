#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18

void solve()
{
    int n;
    cin>>n;
    unordered_map<int,int> mpp;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mpp[x]++;
    }
    bool flag = 0;
    for(auto x:mpp){
        if(x.second > 2){
            flag =1;
            break;
        }
        a.push_back(x.first);
    }
    sort(a.begin(),a.end());
    if(flag == 1 || mpp[a[a.size()-1]] == 2){
        cout<<-1<<endl;
    }
    else{
        for(int i=0;i<a.size();i++){
            if(mpp[a[i]] == 2)
                cout<<a[i]<<" ";
        }
        for(int i=a.size()-1; i>=0; i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
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
