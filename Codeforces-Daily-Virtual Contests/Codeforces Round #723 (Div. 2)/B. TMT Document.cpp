#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

bool solve()
{
    int n;
    cin >> n;
    string s;
    cin>>s;

    vector<int> t,m;
    for(int i=0;i<n;i++){
        if(s[i]=='T')
            t.push_back(i);
        else
            m.push_back(i);
    }

    if(t.size() != 2*m.size())
        return false;
    for(int i=0;i<m.size();i++){
        if(m[i] < t[i] || m[i] > t[i+m.size()])
            return false;
    }
    return true;
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
        cout<<"CASE #"<<i+1<<endl;
        i++;
       cout<< (solve() ? "YES":"NO")<<endl;
    }
}