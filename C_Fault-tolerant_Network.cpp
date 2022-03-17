#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
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

template <typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &a)
{
    in >> a.fr >> a.sc;
    return in;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &out, pair<T1, T2> a)
{
    out << a.fr << " " << a.sc;
    return out;
}
template <typename T, typename T1>
T amax(T &a, T1 b)
{
    if (b > a)
        a = b;
    return a;
}
template <typename T, typename T1>
T amin(T &a, T1 b)
{
    if (b < a)
        a = b;
    return a;
}

const long long INF = 1e9;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;
int n;
int bestCandidate(const vector<int> & vals,int cur){
    int best = INF + 10, pos = -1;
    rep(i,0,n){
        if(best > abs(cur- vals[i])){
            best = abs(cur - vals[i]);
            pos = i;
        }
    }
    return pos;
}

void solve()
{
    
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);


    int best = 10ll * INF;
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    vector<int> cds1 = {0, bestCandidate(b, a[0]), n - 1};
    vector<int> cds2 = {0, bestCandidate(b, a[n-1]), n - 1};

    for(int var1 : cds1){
        for(int var2 : cds2){
            int ans = (int)abs(a[0] - b[var1]) + abs(a[n - 1] - b[var2]);

            if(var1 >0 && var2>0)
                ans += abs(b[0] - a[bestCandidate(a, b[0])]);
            if(var1 < n-1 && var2 < n-1)
                ans += abs(b[n - 1] - a[bestCandidate(a, b[n - 1])]);

            best = min(best, ans);
        }
    }
    cout<<best<<endl;
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
