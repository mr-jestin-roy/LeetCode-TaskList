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

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<array<int, 3>> a(m);  //This container wraps around fixed-size arrays and the information of its size are not lost when declared to a pointer. 
    for (int i = 0; i < m;i++){
        //coordinate & weight
        cin >> a[i][1] >> a[i][0];
        //this is the numbering of points
        a[i][2] = i + 1;
    }
    sort(all(a));//sort based on weights
    int w = 0;
    vector<pair<int, int>> b; //to store coordinates & the corresponding
    //numbering of points
    for (int i = 0; i < 2 * n;i++){
        w += a[i][0];
        b.push_back({a[i][1], a[i][2]});
    }
    // we sort that vector of pairs 
    sort(all(b));
//Hence, we print the sum of weight 
    cout<<w<<endl;
    //now we print the points that we connect
    for (int i = 0; i < n;i++){
        cout << b[i].second << " " << b[2 * n - 1 - i].second << endl;
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
