#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
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
// adjacency vector for graph
vector<int> v[2000005];

void solve()
{
    int n, m, queries, x, y;
    cin >> n >> m >> queries;
    while (m--)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        // UNDIRECTED GRAPH
    }
    map<int, int> mp; // to keep track of flag status on each node
    queue<int> q;
    while (queries--)
    {
        // taking query type : node
        cin >> x >> y;
        if (x == 3)
        { // TYPE 3: CHECK STATUS
            if (mp[y] == 1)
            { // FROZEN
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (x == 1) // TYPE 1 : FREEZE UNFROZEN MENTIONED NODE
        {
            if (mp[y] == 0)
                q.push(y);

            mp[y] = 1;
        }
        else
        {
            // type two , let (t+1) seconds pass,
            //  every node at t distance is frozen
            for (int i = 0; i < y && !q.empty; i++)
            {
                int k = q.size();
                while (k--)
                {
                    int u = q.front();
                    q.pop();
                    for (auto x : v[u])
                    { // ADJACENCY LIST
                        if (mp[x] == 0)
                        { // MARK ALL CONNECTED NODES FROZEN
                            mp[x] = 1;
                            q.push(x);
                        }
                    }
                }
            }
        }
    }
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
