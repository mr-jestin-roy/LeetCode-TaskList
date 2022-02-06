#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

int n, k;

bool helper(vector<int> &arr, int m)
{
    int l = max(n - m, (int)1);
    int r = n - 1;
    int first = arr[0] - (m - (r - l + 1));
    while(l<=r)
    {
        int left = arr[l] - first;
        int right = (r - l);

        if(right >= left)
        {
            first--;
            l++;
        }
        else{
            break;
        }
    }

    int sum = first;
    for (int i = 1; i < l;i++){
        sum += arr[i];
    }
    for (int j = l; j <= r;j++){
        sum += first;
    }

    return (sum <= k);
}




void solve()
{
    int n, k;
    cin >> n >> k;
    int i, j;
    if(k==1 || n%2==0){
        cout<<"YES"<<endl;
        for (i = 1, j = 1; i <= n * k; i += 2, j++){
            cout << i << " ";
            if(k==j){
                cout << endl;
                j = 0;
            }

        }
        for (i = 2, j = 1; i <= n * k;i+=2,j++){
            cout << i << " ";
            if(k==j){
                cout << endl;
                j = 0;
            }
        }
    }
    else{
        cout << "NO" << endl;
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