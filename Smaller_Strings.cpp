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

//gives you k^x         BINARY POWER
int pw(int a, int p = M - 2, int MOD = M)
{
    int result = 1;
    while (p > 0)
    {
        if (p & 1)
            result = a * result % MOD;
        a = a * a % MOD;
        p >>= 1;
    }
    return result;
}

void solve(int test)
{
    cout << "Case #" << test << ": ";

    int n, k;

    string s;
    cin >> n >> k >> s;

    int m = (n + 1) / 2;

    int ans = 0;
    rep(i, 0, m)
    {
        char c = s[i];
        int d = (c - 'a');
        ans = (ans + d * pw(k, m - 1 - i)) % M;
    }

    string t;
    rep(i, 0, m) t.pb(s[i]);
    rep(i, 0, n - m)
    {
        t.pb(s[n - m - 1 - i]);
    }

    if (t < s)
        ans++;
    ans = ans % M;

    cout << ans;
    cout << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#ifdef SIEVE
    sieve();
#endif

    int t = 1;
    cin >> t;
    rep(i, 1, t + 1) solve(i);
    return 0;
}
