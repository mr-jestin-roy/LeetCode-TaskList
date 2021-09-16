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
        int n,s;
        cin>>n>>s;
        int sum = (n*(n+1))/2;
        if(sum > s){
            cout<<sum-s<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}