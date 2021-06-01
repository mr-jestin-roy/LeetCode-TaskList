#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

void solve(){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int ans = 0;
        int sum = 0;
        for(int i=n-1;i>=0;i--){
            if((sum+a[i])>=0){
                sum += a[i];
                ans++;
                
            }
        }
        cout<<ans<<endl;
}

int32_t main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
}