#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

int findTheWinner(int n, int k) {
        int res = 0;
        for (int i = 1; i <= n; ++i)
            res = (res + k) % i;
        return res + 1;
}
void solve()
{
        string s;
        cin >> s;
        int lastOcc = -1;
        for(int i = 0; i < s.length() - 1; i++){
            int a = s[i] - '0';
            int b = s[i + 1] - '0';
            if(a + b >= 10){
                lastOcc = i;
            }
        }
        if(lastOcc == -1){
            int a = s[0] - '0';
            int b = s[0 + 1] - '0';
            cout << a + b;
            for(int i = 2; i < s.length(); i++){
                cout << s[i];
            }
            cout << endl;
        }else{
            for(int i = 0; i < lastOcc; i++){
                cout << s[i];
            }            
            int a = s[lastOcc] - '0';
            int b = s[lastOcc + 1] - '0';
            cout << a + b;
            for(int i = lastOcc + 2; i < s.length(); i++){
                cout << s[i];
            }
            cout << endl;
        }
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