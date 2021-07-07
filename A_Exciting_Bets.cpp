#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bool imp = true;

void solve()
{
    int a, b;
    cin >> a >> b;
    int score = 0;
    if (a == 0 && b == 0)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    if (a == 0 || b == 0)
    {
        score = __gcd(a, b);
        cout << score << " " << 0 << endl;
        return;
    }
    else if (a == b)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    if (max(a, b) - min(a, b) == 1)
    {
        int cnt = 0;
        cout << max(a, b) - min(a, b) << " " << cnt << endl;
        return;
    }
    int cnt = 0;

    while (a > 0 && b > 0)
    {
        cnt = __gcd(a, b);

        if (__gcd(a, b) == 0)
        {
            a++;
            b++;
            cnt++;
        }
        else
        {
            cout << max(a, b) - min(a, b) << " " << __gcd(a, b) << endl;
            return;
        }
    }
    cout << "__gcd(a, b) << "
            " << cnt"
         << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fio;
    ll t = 1;
    if (imp)
        cin >> t;
    ll j = t;
    while (t--)
    {
        // cout<<"Case #"<<j-t<<": ";
        solve();
    }
    return 0;
}