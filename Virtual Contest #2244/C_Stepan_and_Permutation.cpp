#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> parent;
    DSU(int n)
    {
        parent.resize(n + 1);
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int i)
    {
        int root = i;
        while (parent[root] != root)
            root = parent[root];
        while (parent[i] != root)
        {
            int next = parent[i];
            parent[i] = root;
            i = next;
        }
        return root;
    }
    void unite(int i, int j)
    {
        int root_i = find(i);
        int root_j = find(j);
        parent[root_i] = (root_i != root_j) ? root_j : root_i;
    }
};

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> p[i];

    DSU dsu(n);
    int i = n;
    while (i >= 1)
    {
        if (i + y <= n)
            dsu.unite(i, i + y);
        if (i + x <= n)
            dsu.unite(i, i + x);
        i--;
    }

    bool possible = true;
    int j = n;
    while (j >= 1)
    {
        possible = (dsu.find(j) != dsu.find(p[j])) ? false : possible;
        j--;
    }

    cout << (possible ? "YES\n" : "NO\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
