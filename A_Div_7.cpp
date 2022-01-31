#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15


void solve()
{
            string s;
            cin >> s;
            int n = stoi(s);
            if(n % 7 == 0){
                cout << n << endl;
                return;
            }
            int sz = s.size();
            int temp = n % 7;
            if (n%10 <= 3)
            {
                cout << n + (7 - temp) << endl;
                return;
            }
            if (n%10 >= 7)
            {
                cout << n - temp << endl;
                return;
            }

            int t = n % 10;
            if(t >= temp){
                cout << n - temp << endl;
            }
            else{
                 cout << n + (7 - temp) << endl;
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
