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
        // cout << "Case #" << tt << ": ";
        int k;
        cin>>k;
        int m = 1;  //columns
        while(k > m*2 - 1){     //updating the rows
            k -= m*2 -1;
            m++;
        }
        if(k <= m)
            cout<< k <<" "<< m <<endl;
        else
            cout<< m <<" "<< m*2 - k <<endl;
    }
}
