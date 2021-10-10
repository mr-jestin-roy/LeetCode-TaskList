#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

int checkTWo(int arr[], int n, int k)
{
    int count = 0;
    unordered_map<int, int> m;
  
    for (int i = 0; i < n; i++) {
        if (m.find(k - arr[i]) != m.end()) {
            count += m[k - arr[i]];
        }
        m[arr[i]]++;
    }
    return count;
}

int check(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[n*arr[i]]++;
 
    int twice_count = 0;
    for (int i = 0; i < n; i++) {
        twice_count += m[sum - n*arr[i]];
        if (sum - n*arr[i] == n*arr[i])
            twice_count--;
    }
    return twice_count / 2;
}
void solve()
{
    
    int n;cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i]; sum+= a[i];
    }
    int res = (2*sum);
    int cnt =  check(a,n,res);
    cout<<cnt<<endl;      
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

