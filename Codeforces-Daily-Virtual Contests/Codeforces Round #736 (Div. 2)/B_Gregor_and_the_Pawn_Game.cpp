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
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int ans =0;
    for(int i=0;i<n;i++){
        if(s2[i]!='1') 
            continue;
        if(i != 0 && s1[i-1]=='1'){
            s1[i-1] = '2';
            ans++;
        }
        else if(s1[i]=='0'){
            s1[i]='2'; ans++;
        }
        else if(i != n-1 && s1[i+1]=='1'){
            s1[i+1]='2'; ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}