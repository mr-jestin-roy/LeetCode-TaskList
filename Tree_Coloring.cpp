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

const long long mod = 1e9 + 7;
long long mod_mul(long long a, long long b)
{
    long long res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        a = (2 * a) % mod;
        b >>= 1;
    }
    return res;
}

void solve()
{

    bool not_possible;
    int ans, n, c;
    queue<pair<pair<int, int>, int>> q;
    cin >> n >> c;
    vector<vector<int>> adj(n);

    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        --x, --y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    not_possible = false;
    ans = c;

    q.push(make_pair(make_pair(0, 0), -1));
    while (!q.empty())
    {
        int sz = q.size();

        int node = q.front().first.first, dec = q.front().first.second, par = q.front().second;
        q.pop();
        dec++;
        if (dec > 2)
        {
            dec = 2;
        }
        int can_take = c - dec;
        long long to_mul = can_take;
        if (adj[node].size() > can_take)
        {
            not_possible = true;
            break;
        }

        for (auto &child : adj[node])
        {
            if (child != par)
            {
                ans = mod_mul(ans, to_mul);
                q.push(make_pair(make_pair(child, dec), node));
                to_mul--;
            }
        }
    }
    ans %= mod;
    if (not_possible)
    {
        cout << 0 << endl;
        return;
    }

    cout << ans << endl;
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
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
