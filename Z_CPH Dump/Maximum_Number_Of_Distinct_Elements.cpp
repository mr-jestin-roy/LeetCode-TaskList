#include<bits/stdc++.h>
 
using namespace std;
 
#define modd 998244353
#define int long long int
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
 

bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    return a.second < b.second;
}
 void solve(){
    int n; cin>>n;
    int x;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(make_pair(x,i));
    }
    int k=0;
    sort(arr.begin(),arr.end());
    for(int j=0;j<n;j++){
        if(arr[j].first > k){
            arr[j].first = k;
            k++;
        }
        else if(arr[j].first == k)
            arr[j].first = k;
    }
    sort(arr.begin(),arr.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i].first<<" ";
    }
    cout<<endl;
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

 
