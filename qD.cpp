#pragma GCC optimize("Ofast")
#pragma GCC optimize ("O3")
#pragma GCC target("avx,avx2,fma")
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <algorithm>
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

// Precompute all vertices reachable with walks of length k
vector<vector<int>> precompute_reachable(const vector<vector<int>>& graph, int k) {
    int n = graph.size() - 1;
    vector<vector<int>> reachable(n + 1);
    
    for (int start = 1; start <= n; start++) {
        queue<pair<int, int>> q; // (vertex, steps)
        q.push({start, 0});
        
        // We need to track visited states (vertex, steps) to avoid infinite loops
        vector<vector<bool>> visited(n + 1, vector<bool>(k + 1, false));
        visited[start][0] = true;
        
        while (!q.empty()) {
            auto [v, steps] = q.front();
            q.pop();
            
            if (steps == k) {
                reachable[start].pb(v);
                continue;
            }
            
            if (steps > k) continue;
            
            for (int neighbor : graph[v]) {
                if (!visited[neighbor][steps + 1]) {
                    visited[neighbor][steps + 1] = true;
                    q.push({neighbor, steps + 1});
                }
            }
        }
    }
    
    return reachable;
}

void solve()
{
    int n, m, l;
    cin >> n >> m >> l;
    
    // Read the multiset A
    vector<int> A(l);
    rep(i, 0, l) {
        cin >> A[i];
    }
    
    // Build the graph
    vector<vector<int>> graph(n + 1);
    rep(i, 0, m) {
        int u, v;
        cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    
    // Precompute reachability for each unique walk length
    map<int, vector<vector<int>>> reachable_cache;
    for (int k : A) {
        if (reachable_cache.find(k) == reachable_cache.end()) {
            reachable_cache[k] = precompute_reachable(graph, k);
        }
    }
    
    // We'll use dynamic programming to solve this problem
    // dp[i][j] = true if vertex j is reachable after using i elements from A
    vector<vector<bool>> dp(l + 1, vector<bool>(n + 1, false));
    dp[0][1] = true; // We start at vertex 1
    
    // For each element in A
    for (int i = 0; i < l; i++) {
        // For each vertex we could be at before using this element
        for (int j = 1; j <= n; j++) {
            if (!dp[i][j]) continue;
            
            // Use precomputed reachability
            for (int next : reachable_cache[A[i]][j]) {
                dp[i + 1][next] = true;
            }
        }
    }
    
    // A vertex is reachable if we can reach it using any number of elements from A
    string result(n, '0');
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= l; j++) {
            if (dp[j][i]) {
                result[i - 1] = '1';
                break;
            }
        }
    }
    
    cout << result << endl;
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