#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

void solve()
{
    int n,q;
    cin >> n >> q;
    vector<int> values(n);
      int count0 = 0, count1 = 0;
      for(int i = 0; i < n; i++){
            cin >> values[i];
            if(values[i]){
                  count1++;
            }else{
                  count0++;
            }
      }
      while(q--){
            int a;
            cin >> a;
            if(a == 1){
                  int p;
                  cin >> p;
                  p--;
                  if(values[p]){
                        count0++;
                        count1--;
                  }else{
                        count1++;
                        count0--;
                  }
                  values[p] = 1 - values[p];
            }else{
                  int k;
                  cin >> k;
                  if(count1 >= k)
                        cout << 1 << endl;
                  else
                        cout << 0 << endl;
            }
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
