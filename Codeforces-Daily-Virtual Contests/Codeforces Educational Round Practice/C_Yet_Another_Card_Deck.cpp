#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> v(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;
        int p = find(v.begin(), v.end(), x) - v.begin();
        cout << p + 1 << " ";
        rotate(v.begin(), v.begin() + p, v.begin() + p + 1);
    }
    cout << endl;
}

int main()
{
    solve();
    return 0;
}