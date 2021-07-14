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
    ll n = 0, m = 0, i = 0, j = 0, k = 0, c = 0, flag = 0, sum = 0;
    string s, t;
    cin >> n >> k;
    ll a[n + 5];
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            c++;
    }
    if (k >= c)
    {
        cout << 2 * n - 1 << endl;
        return;
    }

    if (s[0] == 'W')
        sum = 1;
    for (i = 1; i < n; i++)
    {
        if (s[i] == 'W')
        {
            if (s[i - 1] == 'W')
                sum++;
            sum++;
        }
    }

    if (k == 0)
    {
        cout << sum << endl;
        return;
    }

    ll l = n, r = -1;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            l = i;
            break;
        }
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'W')
        {
            r = i;
            break;
        }
    }
    if (l > r)
    {
        cout << 2 * k - 1 << endl;
        return;
    }
    else if (l == r)
    {
        cout << 2 * k + 1 << endl;
        return;
    }

    c = 0;
    vector<ll> v;
    for (i = l; i <= r; i++)
    {
        if (s[i] == 'L')
            c++;
        else
        {
            // cout<<c<<" "<<i<<"m \n";
            if (c > 0)
                v.push_back(c);
            c = 0;
        }
    }
    sort(v.begin(), v.end());

    // cout<<l<<" "<<r<<endl;
    for (auto it : v)
    {
        // cout<<it<<endl;
        if (k >= it)
        {
            k -= it;
            sum += ((2 * it) + 1);
        }
        else
            break;
    }
    sum += (2 * k);

    cout << sum << endl;
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