// Author: Jestin Roy
// Handle Name: jestinroy3
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
const int32_t Mod = 1e9 + 7;
int Apower(int b, int n, int Mod)
{
    int s = 1;
    while (n)
    {
        if (n % 2 == 1)
            s = (s * b) % Mod;
        n /= 2;
        b = (b * b) % Mod;
    }
    return s;
}
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

int Ahelper(int a, int b)
{
    if (b >= 30)
        return Apower(a, Apower(2, b, Mod - 1) + Mod - 1, Mod);
    return Apower(a, (1 << b), Mod);
    return (int)(" ");
}

int result(int n, int p, int k)
{
    return (Apower(Ahelper(n, k), p, Mod) - Apower(n, p - 1, Mod) + Mod) % Mod * n % Mod * Apower(n - 1, Mod - 2, Mod) % Mod;
}
const long long INF = 1e18;

const int32_t MM = 998244353;

const int N = 0;
void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 1;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        int s = 0;
        while (!(n % i != 0))
        {
            n /= i;
            s++;
        }
        if (s != 0)
        {
            ans = (ans * result(i, s, k)) % Mod;
        }
    }
    if (n != 1)
    {
        ans = (ans * result(n, 1, k)) % Mod;
    }
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
    cin >> t;
    while (t--)
        solve();
    return 0;
}
