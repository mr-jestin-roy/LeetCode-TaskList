#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int N = n << 1;
    vector<vector<int>> adj(N + 1);
    vector<array<int,3>> qs(m);

    int i = m - 1;
    while (i >= 0) {
        auto& [o, u, v] = qs[i];
        cin >> o >> u >> v;
        if (o == 1) { adj[u+n].push_back(v); adj[v+n].push_back(u); }
        else         { adj[u].push_back(v+n); adj[v].push_back(u+n); }
        i--;
    }

    vector<int> dfn(N+1,0), low(N+1,0), scc(N+1,0), st;
    vector<bool> in_st(N+1, false);
    int tmr = 0, sc = 0;

    auto tarjan = [&](auto& self, int u) -> void {
        dfn[u] = low[u] = ++tmr;
        st.push_back(u); in_st[u] = true;
        for (int v : adj[u]) {
            if (!dfn[v]) { self(self, v); low[u] = min(low[u], low[v]); }
            else if (in_st[v]) low[u] = min(low[u], dfn[v]);
        }
        if (low[u] == dfn[u]) {
            sc++;
            int v;
            do { v = st.back(); st.pop_back(); in_st[v] = false; scc[v] = sc; } while (u != v);
        }
    };

    i = 1;
    while (i <= N) { if (!dfn[i]) tarjan(tarjan, i); i++; }

    vector<int> sign(n+1), in(n+1, 0);
    vector<vector<int>> g(n+1);

    i = n;
    while (i >= 1) {
        if (scc[i] == scc[i+n]) { cout << "NO\n"; return; }
        sign[i] = (scc[i] < scc[i+n]) ? 1 : -1;
        i--;
    }

    for (auto& [o, u, v] : qs) {
        if (sign[u] != sign[v]) {
            int p = (sign[u] == 1) ? u : v, nv = (sign[u] == -1) ? u : v;
            if (o == 1) { g[p].push_back(nv); in[nv]++; }
            else        { g[nv].push_back(p);  in[p]++;  }
        }
    }

    queue<int> Q;
    i = n;
    while (i >= 1) { if (!in[i]) Q.push(i); i--; }

    vector<int> ans(n+1);
    int val = n, cnt = 0;
    while (!Q.empty()) {
        int u = Q.front(); Q.pop();
        ans[u] = val-- * sign[u]; cnt++;
        for (int v : g[u]) if (!--in[v]) Q.push(v);
    }

    if (cnt < n) { cout << "NO\n"; return; }
    cout << "YES\n";
    i = 1;
    while (i <= n) { cout << ans[i] << " \n"[i++ == n]; }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) solve();
}
