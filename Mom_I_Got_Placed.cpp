#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#include "bits/stdc++.h"
using namespace std;
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll

template <typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &a)
{
    in >> a.fr >> a.sc;
    return in;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &out, pair<T1, T2> a)
{
    out << a.fr << " " << a.sc;
    return out;
}
template <typename T, typename T1>
T amax(T &a, T1 b)
{
    if (b > a)
        a = b;
    return a;
}
template <typename T, typename T1>
T amin(T &a, T1 b)
{
    if (b < a)
        a = b;
    return a;
}

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

int f(string s, int m)
{
    int n = s.size();
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            ans++;
    }
    int cnt = 0;
    int i = 1, j = n - 2;
    while (i < j && m > 0 && i < n && j >= 0)
    {
        if (s[i] == s[j] && s[i - 1] != s[i] && s[j] != s[j + 1])
        {
            m--;
            ans += 2;
            j--;
            i++;
        }
        else if (s[i] == s[i - 1])
            i++;
        else if (s[j] == s[j + 1])
        {
            j--;
        }
        else
        {
            j--;
            cnt++;
        }
    }
    if (m > 0 && i == j)
    {
        if ((i - 1 >= 0 && s[i] != s[i - 1]) && (i + 1 < n && s[i] != s[i + 1]))
        {
            ans += 2;
            m--;
        }
    }
    // cout << cnt << " " << m << endl;
    ans += min(cnt, m);
    return ans;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int o = 0;
    int z = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
            o++;
        else
            z++;
    }
    // cout << l << " " << r << endl;
    int mn = min(o, z);
    // cout << mn << endl;
    if (m >= mn)
    {
        cout << n - 1;
        return;
    }
    int ans = f(s, m);
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#ifdef SIEVE
    sieve();
#endif
#ifdef NCR
    init();
#endif
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
