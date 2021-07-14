#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 91)
            s[i] = s[i] + 'a' - 'A';
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        }
        else
        {
            cout << "." << s[i];
        }
    }
}

int main()
{
    solve();
    return 0;
}