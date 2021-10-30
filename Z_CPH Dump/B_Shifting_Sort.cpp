#include<bits/stdc++.h>
 
using namespace std;
 
#define modd 998244353
#define ll long long
#define mod 1000000007
#define cbit __builtin_popcountll
#define pl pair<long, long>
#define double long double
#define pqp priority_queue<pl>
#define mkp make_pair
#define vl vector<ll>
#define vvl vector<vl>
#define pb push_back
#define inf 1000000000000000000
#define all(v) v.begin(), v.end()
 
void rotate(vector<int> &arr, int l, int r, int d)
{
    vector<int> temp;
 
    for (int i = l; i < l + d; i++)
    {
        temp.push_back(arr[i]);
    }
 
    int count = 0;
    for (int i = l; i + d <= r; i++)
    {
        arr[i] = arr[i + d];
        count++;
    }
 
    reverse(temp.begin(), temp.end());
 
    for (int i = count+l; i <= r; i++)
    {
        arr[i] = temp.back();
        temp.pop_back();
    }
}

 void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        int j=i-1;
        while(j>=0 && arr[j] > arr[i])
            j--;
        
        j++;
        if(j==i)
            continue;
        
        ans.push_back({j+1,i+1,(i-j)});
        rotate(arr,j,i,i-j);
    }

    cout<<ans.size()<<endl;
    for(auto x : ans)
    {
        cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    }
       
 }
 signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#ifdef SIEVE
    sieve();
#endif
#ifdef NCR
    init();
#endif
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

 
