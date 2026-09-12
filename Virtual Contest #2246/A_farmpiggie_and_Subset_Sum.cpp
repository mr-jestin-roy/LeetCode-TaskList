#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    int e = 2, o = 1;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            p[i - 1] = o;
            o += 2;
        }
        else
        {
            p[i - 1] = e;
            e += 2;
        }
        i++;
    }
    int j = 0;
    while (j < n)
    {
        cout << p[j] << " \n"[j == n - 1];
        j++;
    }
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
