#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    int n;
    cin >> n;
    vector<int> a(2*n);
    map<int, int> freq;
    for (int i = 0; i < 2 * n;i++){
        int x;
        cin >> x;
        freq[x]++;
    }
    bool flag = true;

    for (int i = 0; i < 2 * n;i++){
        if(freq[i] == 1){
            flag = false;
            break;
        }
        else if(freq[i] == 0)
            break;
    }

    if(flag){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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