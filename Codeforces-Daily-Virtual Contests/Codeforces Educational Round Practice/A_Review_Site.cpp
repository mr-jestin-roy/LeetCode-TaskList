#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1 || x == 3)
            cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}