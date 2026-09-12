#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    int i = n - 1;
    while (i >= 0)
    {
        int x;
        cin >> x;
        sum += x;
        i--;
    }
    cout << (sum % 4 != 0 ? "NO\n" : "YES\n");
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
