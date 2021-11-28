#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
int getcount(string s){
    int n = s.size();
    int count = 0;
    for (int i = 0; i < n - 2;i++){
        if("abc" == s.substr(i,3))
            count++;
    }
    return count;
}
void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int countabc = getcount(s);

    while(q--){
        string str;
        int pos;
        
        cin >> pos >> str;
        pos--;
        char c = str[0];
        if(s[pos]==c){
            //no need
        }
        else{
            
            int st = max(0, pos - 3);
            int end = min(n - 1, pos + 3);
            
            int oldcount = getcount(s.substr(st,end-st+1));
            s[pos] = c;
            int newcount = getcount(s.substr(st,end-st+1));
            countabc += (newcount - oldcount);
        }
        cout << countabc << endl;
    }
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);

    int t = 1;
    // cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}
