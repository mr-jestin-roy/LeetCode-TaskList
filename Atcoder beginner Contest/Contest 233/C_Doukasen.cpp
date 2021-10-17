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

#define N	100000

void solve()
{
    
    int arr[N],brr[N];
    int n;
    double sum,x;
    cin>>n;
    sum = 0;
    for(int i =0;i<n;i++){
        cin>>arr[i]>>brr[i];
        sum += (double) arr[i]/brr[i];
    }
    //find middle
    sum = sum/2;
    x=0;
    for(int i=0;i<n;i++){
        double c = (double) arr[i]/brr[i];
        if(sum >= c){
            sum -= c;
            x += arr[i];
        }
        else{
            x += sum * brr[i];
            break;
        }
    }
    printf("%f\n",x);
    

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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

