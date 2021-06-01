#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

void rearrange(int a[],int n){
    int i=0; int j =(n-1);

    while(j>=i){
        if(a[i]%2==0){
            if(a[j]%2!=0)
            {
                swap(a[i],a[j]);
                i++;
                j--;
            }
            else
                j--;
        }
        else
            i++;
    }
}

void solve()
{
    int n;
    cin >> n;
    int a[n];
    // vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rearrange(a,n);
    // partition(a.begin(), a.end(), [&](const int u) {
    //         return u % 2;
    // });
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int32_t main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t = 1;
    cin >> t;
    int i=0;
    while (t--)
    {
        solve();
    }
}