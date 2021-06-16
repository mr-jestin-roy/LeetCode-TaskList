// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ans = 0; //DISTANCE BETWEEN THE 0th & (n-1)th charge

    //  INTIAL SPACING IN STRING OF CHARGES
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            ans += 2;
        else
            ans++;
    }

    int i = 0;
    while (k--) //only the storing the delta that was brought by each updation
    {
        int index;
        cin >> index;
        index--;
        s[index] = (s[index] == '0' ? '1' : '0');
        //edge cases
        if (index == 0) //leftmost element
        {
            if (index + 1 < n)
            {
                if (s[index] == s[index + 1])
                    ans++; //delta = +1;
                else
                    ans--;
            }
        }
        else if (index == n - 1) //rightmost charge
        {
            if (index - 1 >= 0)
            {
                if (s[index] == s[index - 1])
                    ans++; //delta = +1;
                else
                    ans--;
            }
        }
        else
        {
            if (s[index - 1] == s[index + 1]) // in between charges
            {
                if (s[index] == s[index - 1])
                    ans += 2; //delta = +2;
                else
                    ans -= 2;
            }
        }

        cout << ans << endl;
    }
}
int32_t main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}