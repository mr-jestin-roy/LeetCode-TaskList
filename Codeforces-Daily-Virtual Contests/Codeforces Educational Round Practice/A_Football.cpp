#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            cnt0++;
            cnt1 = 0;
        }
        else if (s[i] == '1')
        {
            cnt0 = 0;
            cnt1++;
        }
        if (cnt0 >= 7 || cnt1 >= 7)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    solve();
    return 0;
}