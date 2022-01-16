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
    cin>>s;
    int max = 0;
    string x = "";
    for (int i = 0; i < s.size()-1; i++)
    {

        int temp = (s[i] - '0') + (s[i + 1] - '0');
        if(temp >= 10 && temp > max){
            max = temp;
            x = s[i] + s[i + 1];
        }
    }
    cout <<max<< endl;
    string a = to_string(max);
    s.replace(s.find(x), max);

    cout << s << endl;
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