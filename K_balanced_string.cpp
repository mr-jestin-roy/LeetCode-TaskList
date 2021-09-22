#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
const long double Pi = 3.141592653;
const ll mod=1e9+7;
long long INF =1000000000000000000;
struct mycmp
{
    bool operator()(pair<int,int>a,pair<int,int>b)const
    {
        return (a.first<b.first) || (a.first==b.first && a.second>b.second);
   } 
};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;cin>>t;
    while(t--)
    {
        ll n,m,x,y;cin>>n>>m>>x>>y;
        if(n==1)
        cout<<(m-1)*x<<"\n";
        else if(m==1)
        cout<<(n-1)*x<<"\n";
        else
        {
        ll ans=(n-1+m-1)*x;
        ll x1=min(n,m);
        ll p=min(x,y);
        ll h=(n-x1+m-x1);
        if(h&1)
        ans=min(ans,(x1-1)*y+(n-x1+m-x1-1)*p+x);
        else
        ans=min(ans,(x1-1)*y+(n-x1+m-x1)*p);
        cout<<ans<<"\n";
        }
    }
}