#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, s;
    cin >> n >> m >> s;
    vector<int> c(n);
    for (auto &x : c)
        cin >> x;
    vector<int> a(m), b(m);
    for (int i = 0; i < m; i++)
        cin >> a[i] >> b[i];
    return 0;
}
