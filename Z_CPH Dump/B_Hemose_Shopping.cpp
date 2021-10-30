#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846


void solve(){
    int n,x; cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    vector<int> b = a;  sort(b.begin(),b.end());
    
    for(int i=0;i<n;i++){
        if(i < x && (i > n-1-x) && a[i]!=b[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);

    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        solve();

    }
}
