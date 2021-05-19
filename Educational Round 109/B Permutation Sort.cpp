#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int max = -1;
    int min = 100;
    for (auto &x : a)
    {
        cin >> x;
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            isSorted = 1;
            break;
        }
    }
    if (isSorted == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        if (a[0] == min || a[n - 1] == max)
        {
            cout << 1 << endl;
        }
        else if (a[0] == max && a[n - 1] == min)
        {
            cout << 3 << endl;
        }
        else
            cout << 2 << endl;
    }
}
int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}