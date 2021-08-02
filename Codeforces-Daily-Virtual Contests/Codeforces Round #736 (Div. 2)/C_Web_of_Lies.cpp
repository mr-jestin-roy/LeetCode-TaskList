#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl "\n"
#define mod 1000000007
#define PI 3.14159265358979323846
#define MAX 1e5

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> network(n);
    int cnt =n;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        --x,--y;
        if(x>y)       swap(x,y);
        if(network[x]==0)   
            cnt--;
        network[x] +=1;
    }
    int q; 
    cin>>q;
    while(q--){
        int op; cin>>op;
        if(op ==1){
            int x,y;
        cin>>x>>y;
        --x;    --y;
        if(x>y)            swap(x,y);
        if(network[x]==0)   
            cnt--;
        network[x] +=1;
        }
        if(op == 2){
            int x,y;
            cin>>x>>y;
            --x; --y;
            if(x>y)            swap(x,y);
            network[x] -=1;
            if(network[x]==0)   
                cnt++;
        }
        if(op == 3){
            cout<<cnt<<endl;
        }
    }
}
int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}