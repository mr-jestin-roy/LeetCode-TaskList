#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n != 1)
    {
        if (n != 2)
        {
            vector<long long> a = {1, 2, 3};
            long long s = 6;
            long long i = 4;
            while (i <= n)
            {
                a.push_back(s);
                s *= 2;
                i++;
            }
            long long j = 0;
            while (j < (long long)a.size())
            {
                cout << a[j] << " \n"[j + 1 == (long long)a.size()];
                j++;
            }
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    else
    {
        cout << 1 << "\n";
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
