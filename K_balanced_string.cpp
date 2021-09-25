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

void solve(){
    int n,k;
    cin>>n>>k;
    string s; cin>>s;
    int ans =0;
    
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            if((i>=k && s[i-k] == '1')||((i+k)<n && s[i+k] == '1'))
                continue;
            else{
                ans++;
                if(i+k < n)
                    s[i+k] = '1';
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;cin>>t;
    while(t--)
    {
        solve();
    }
}