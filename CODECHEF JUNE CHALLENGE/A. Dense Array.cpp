// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

void solve()
{
    int total,d,p,q;
    cin>>total>>d>>p>>q;
    int n = total/d;
    int sum = (d*n*(2*p + (n-1)*q))/2 + (total%d)*(p+ n*q);

    cout<<sum<<endl;    
}
int32_t main()
{	
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   	int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}