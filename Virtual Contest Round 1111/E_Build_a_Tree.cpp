/*
E. Build a Tree
2 seconds, 256 megabytes

You are given two integers n and k.

Construct a tree* with n vertices such that
sum_{i=1}^{n} dist(i, (i mod n) + 1) = k,
or determine that no such tree exists.

*A tree is a connected graph without cycles.
dist(i, j) is the number of edges on the shortest path from vertex i to
vertex j in the tree.

Input
Each test contains multiple test cases. The first line contains the number
of test cases t (1 <= t <= 10^4). The description of the test cases follows.

The only line of each test case contains two integers n and k
(2 <= n <= 2*10^5, 0 <= k <= n^2) — the number of vertices in the tree
and the required value of k.

It is guaranteed that the sum of n over all test cases does not exceed 2*10^5.

Output
For each test case, if there is no solution, output -1.
Otherwise, output n - 1 lines. Each line should contain two integers u and v
(1 <= u, v <= n), denoting an edge of the tree. The edges may be output in
any order.

If there are multiple suitable trees, output any of them.

input
5
2 2
4 6
5 10
5 14
100 8347

output
1 2
1 4
1 3
1 2
3 2
3 4
4 1
5 3
-1
-1
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
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
