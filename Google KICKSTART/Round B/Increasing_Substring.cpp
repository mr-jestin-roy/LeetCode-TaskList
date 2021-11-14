#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define ll long long 
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e15

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count =1;
    cout<<1<<" ";
    for(int i=1;i<n;i++){
        count = s[i] > s[i-1] ? (count+1) : 1;
        cout<<count<<" ";
    }
    cout<<endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++)
    {
        cout << "Case #" << caseNum << ": ";
        solve();
    }
}