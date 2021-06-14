// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(a) (ll) a.size()
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int k=0, sum =0;

    vector<int> a(n);
    for(auto &x:a){
         cin>>x;
         sum += x;
    }
    int ans = sum/n;
    if(n==1)
        cout<<0<<endl;
    else if(sum %n !=0)
        cout<<-1<<endl;
    else{
        for(int i=0;i<n;i++){
            if(a[i]>ans) k++;
        }
        cout<<k<<endl;
    }
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