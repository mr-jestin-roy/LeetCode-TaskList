#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e9 + 1
void solve(){
    int n,k;
    cin>>n>>k;
    int cnt = k;
    
    string s;
    cin >> s;
    int ans = 0;
    set<char> s1;
    for(auto i:s){
        s1.insert(i);
    }
    if(s1.size()==1){
        cout << 1 << endl;
        return;
    }
    if(k ==0){
        cout << 1 << endl;
        return;
    }
    string temp = s;
    reverse(temp.begin(), temp.end());

    
    if(s == temp){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }
    // while(cnt--){
    //     string temp(s);
    //     reverse(temp.begin(), temp.end());
    //     string s1 = s + temp;
    //     string s2 = temp + s;
    //     ans += 1;
    //     if(s1 == s2){
    //         // ans -= 1;
    //     }
    //     else{
    //         s = s2;
    //     }
    // }
    
    
}
int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}