#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> type((n+1)*(n+1), 0);
    auto T = [&](int a, int b) -> int& { return type[a*(n+1)+b]; };
    int i = m - 1;
    while (i >= 0) {
        int o, u, v; cin >> o >> u >> v;
        T(u,v) = T(v,u) = o;
        i--;
    }

    vector<int> sign(n+1);
    i = n;
    while (i >= 1) { sign[i] = (T(i,i) == 1) ? 1 : -1; i--; }

    i = 1;
    while (i <= n) {
        int j = i + 1;
        while (j <= n) {
            if (sign[i] == sign[j] && T(i,j) == (sign[i] == 1 ? 2 : 1)) { cout << "NO\n"; return; }
            j++;
        }
        i++;
    }

    vector<vector<int>> g(n+1);
    vector<int> in(n+1, 0);
    i = 1;
    while (i <= n) {
        int j = i + 1;
        while (j <= n) {
            if (sign[i] != sign[j]) {
                int p = (sign[i] == 1) ? i : j;
                int nv = (sign[i] == -1) ? i : j;
                int* dst = (T(i,j) == 1) ? &in[nv] : &in[p];
                auto& from = (T(i,j) == 1) ? g[p] : g[nv];
                int to = (T(i,j) == 1) ? nv : p;
                from.push_back(to);
                (*dst)++;
            }
            j++;
        }
        i++;
    }

    queue<int> q;
    i = n;
    while (i >= 1) { if (!in[i]) q.push(i); i--; }

    vector<int> ans(n+1);
    int val = n, cnt = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        ans[u] = val-- * sign[u];
        cnt++;
        for (int v : g[u]) if (!--in[v]) q.push(v);
    }

    if (cnt < n) { cout << "NO\n"; return; }
    cout << "YES\n";
    i = 1;
    while (i <= n) { cout << ans[i] << " \n"[i == n]; i++; }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) solve();
}
