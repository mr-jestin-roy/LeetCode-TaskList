#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
vector<int> children[MAXN];
int leaf_val[MAXN];
int min_val[MAXN], max_val[MAXN], leaf_cnt[MAXN];
bool is_sortable;

void dfs(int root)
{
    vector<pair<int, int>> stk;
    stk.push_back({root, 0});

    while (!stk.empty())
    {
        int node = stk.back().first;
        int idx = stk.back().second;

        if (idx == 0 && children[node].empty())
        {
            min_val[node] = leaf_val[node];
            max_val[node] = leaf_val[node];
            leaf_cnt[node] = 1;
            stk.pop_back();
            continue;
        }

        if (idx < (int)children[node].size())
        {
            stk.back().second = idx + 1;
            stk.push_back({children[node][idx], 0});
            continue;
        }

        int mn = 1e9, mx = -1e9, cnt = 0;
        int cyclic_drops = 0, first_min = -1, prev_min = -1;

        for (int child : children[node])
        {
            mn = min(mn, min_val[child]);
            mx = max(mx, max_val[child]);
            cnt += leaf_cnt[child];

            first_min = (first_min == -1) ? min_val[child] : first_min;
            cyclic_drops += (prev_min != -1 && prev_min > min_val[child]);
            prev_min = min_val[child];
        }
        cyclic_drops += (prev_min > first_min);
        is_sortable &= (mx - mn + 1 == cnt) && (cyclic_drops <= 1);

        min_val[node] = mn;
        max_val[node] = mx;
        leaf_cnt[node] = cnt;
        stk.pop_back();
    }
}

void solve()
{
    int nodes;
    cin >> nodes;

    int i = nodes;
    while (i >= 1)
    {
        children[i].clear();
        i--;
    }

    i = 2;
    int parent;
    while (i <= nodes && cin >> parent)
    {
        children[parent].push_back(i);
        i++;
    }

    i = 1;
    while (i <= nodes)
    {
        cin >> leaf_val[i];
        i++;
    }

    is_sortable = true;
    dfs(1);
    cout << (is_sortable ? "YES\n" : "NO\n");
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int test_cases;
    if (cin >> test_cases)
    {
        while (test_cases--)
            solve();
    }
    return 0;
}
