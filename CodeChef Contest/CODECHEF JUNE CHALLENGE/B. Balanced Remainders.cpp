// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"


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
        int n;
        cin>>n;

        vector<int> a(n);
        for(auto &x: a) cin>>x;

        array<int,3> c = {};
        for (auto &x : a){ 
            c[x%3] += 1;
        }

        int ans =0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                while(c[j]>n/3){
                    c[j] -=1;
                    c[(j+1)%3]+=1;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;


    }
}