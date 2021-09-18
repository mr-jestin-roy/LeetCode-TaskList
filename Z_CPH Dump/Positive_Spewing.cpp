#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a; 
        for(auto &i:a){
            cin>>i;
        }
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                if(a[0]>0){
                    a[1]++;
                    a[n-1]++;
                }
                else if(a[n-1] > 0){
                    a[n-2]++;
                    a[0]++;
                }
                else if(a[i] > 0){
                    a[i-1]++;
                    a[i+1]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}