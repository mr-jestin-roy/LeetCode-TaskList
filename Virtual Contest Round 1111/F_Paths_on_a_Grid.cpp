/*
F. Paths on a Grid
3 seconds, 1024 megabytes

You are given a grid a of size n x m. The rows are numbered from 1 to n
from top to bottom, and the columns are numbered from 1 to m from left to
right. Each cell of the grid is either blocked or free. Cells (1, 1) and
(n, m) are free.

A set S of cells of a, which may include blocked cells, is called good if
the following conditions hold:
- S is non-empty;
- for every cell (i, j) belonging to S, every path from (1, 1) to (n, m)
  that passes only through free cells, moves one cell down or one cell
  right at each step, and passes through (i, j) also passes through all
  other cells of S.

Count the number of good sets of cells of a modulo 998244353.

Input
Each test contains multiple test cases. The first line contains the number
of test cases t (1 <= t <= 10^4). The description of the test cases follows.

The first line of each test case contains two integers n and m
(1 <= n * m <= 10^6).
The i-th of the following n lines contains a string a_{i,1} a_{i,2} ... a_{i,m}
(a_{i,j} in {0, 1}) — the i-th row of the grid. If a_{i,j} = 1, then cell
(i, j) is free; otherwise, it is blocked. It is guaranteed that
a_{1,1} = a_{n,m} = 1.

It is guaranteed that the sum of n * m over all test cases does not exceed 10^6.

Output
For each test case, output a single integer — the answer to the problem
modulo 998244353.

input
6
1 1
1
2 2
11
11
2 2
10
01
2 2
11
01
4 4
1011
1101
0111
1111
1 32
10010110010001010110011111010011

output
1
5
15
8
162
301989883
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (auto &row : grid)
        cin >> row;
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
