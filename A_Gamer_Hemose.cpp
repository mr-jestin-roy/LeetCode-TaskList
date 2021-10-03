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
    cout << fixed << setprecision(20);

    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n,sum;
        cin>>n>>sum;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());

        int total = arr[0]+arr[1];
        bool flag = false;

        int count = sum / total;
        int remaining = sum - total*count;

        if(remaining == 0){
            cout<<2*count<<endl;
        } 
        else if(remaining <= arr[0])
            cout<< 2*count+1 <<endl;
        else
            cout<< 2*count + 2 <<endl;
    }
}
