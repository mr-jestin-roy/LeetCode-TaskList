#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();

        int total = 0;
        for (int i = 0; i < n;)
        {
            int j = i + 1;
            while (j<n && s[j] == s[i])
                j++;

            if (s[i] == '0')
            {
                total += 1;
            }

            i = j;
        }
        cout << min(total, (int)2) << endl;
    }
}