#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> factors[200005];
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 1; i < 200005; i++)
    {
        for (int j = i; j < 200005; j += i)
        {
            factors[j].push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> rev;
        for (int i = 0; i < n; i++)
        {
            rev[a[i]] = i + 1;
        }
        int ans = 0;
        for (int i = 2; i <= 2 * n; i++)
        {
            for (auto x : factors[i])
            {
                //if(x*x>i){continue;}
                if (rev.find(x) == rev.end() || rev.find(i / x) == rev.end())
                {
                    continue;
                }
                if (rev[x] + rev[i / x] == i && rev[x] < rev[i / x])
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
}
