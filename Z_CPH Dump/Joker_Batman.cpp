#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18

int maximumPopulation(vector<vector<int>>& logs) {
        
        vector<int>v(2051,0);
        
        for(auto a:logs){
            v[a[0]]+=1;
            v[a[1]]-=1;
        }
        for(int i=1;i<2051;i++){
            v[i]+=v[i-1];
        }
        
        int a=INT_MIN,ans=0;
        for(int i=0;i<2051;i++){
            if(a<v[i])a=v[i],ans=i;
        }
        return ans;
    }

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=0;i<n;i++){
        int sum = (arr[i]*(arr[i]+1))/2 - 1;
        if(arr[i] == 1)
            cout<<"Joker";
        else if(arr[i]==2 || sum%2 != 0)
            cout<<"Batman";
        else
            cout<<"Joker";

        cout<<endl;
    }

    
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


