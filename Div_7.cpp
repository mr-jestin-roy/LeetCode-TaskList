#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15


void solve()
{
    int w, h;
    cin >> w >> h;
 
    int k;
 
    vector<vector<int>> mat(4, vector<int>());
 
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> k;
 
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
 
            mat[i].push_back(x);
        }
        sort(mat[i].begin(), mat[i].end());
    }
    ans = max(ans, (mat[0][mat[0].size() - 1] - mat[0][0]) * h);
    ans = max(ans, (mat[1][mat[1].size() - 1] - mat[1][0]) * h);
    ans = max(ans, (mat[2][mat[2].size() - 1] - mat[2][0]) * w);
    ans = max(ans, (mat[3][mat[3].size() - 1] - mat[3][0]) * w);
 
    cout << ans << endl;
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    vector<int> arr;
    for (int i = 7; i < 1000;i+=7){
        arr.push_back(i);
    }
        for (int tt = 1; tt <= t; tt++)
        {
            // cout << "Case #" << tt << ": ";
            int n;
            cin >> n;
            if(n % 7 == 0){
                cout << n << endl;
            }
            else{
            int temp = n;
            int cnt = 0;
            while(temp !=0){
                temp /= 10;
                cnt++;
            }
            int ans = 0;
            for(auto i : arr){
                if(i < pow(10,cnt) && i > pow(10,cnt-1)){
                    cout << i << endl;
                    break;
                }
            }
            }
            
        }
}
