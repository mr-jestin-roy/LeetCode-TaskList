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
    if (a == b)
    {
        cout << "0 0" << endl;
    }
    else
    {
        ll d = abs(a - b);
        cout << d << " " << min(a % d, d - a % d) << endl;
    }
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