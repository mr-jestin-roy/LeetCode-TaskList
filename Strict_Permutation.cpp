#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
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
    vector<int> op(n + 1, n);
    vector<int> a(n);
    set<pair<int, int>, greater<pair<int, int>>> p, q;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (op[x] > y)
        {
            op[x] = y;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        p.insert({op[i], i});
    }
    for (int i = n - 1; i >= 0; i--)
    {

        while (p.begin()->first == i + 1 && !p.empty())
        {
            int v = p.begin()->second;
            p.erase(p.begin());
            q.insert({v, op[v]});
        }
        if (q.empty() > 0)
        {
            cout << -1 << endl;
            return;
        }

        int v = q.begin()->first;
        q.erase(q.begin());
        a[i] = v;
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
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
