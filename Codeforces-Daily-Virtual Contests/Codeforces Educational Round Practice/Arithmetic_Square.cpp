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

const int N = 1e9;

void solve(int test)
{
    cout << "Case #" << test << ": ";

    int ans = 0;
    int g00, g01, g02, g10, g12, g20, g21, g22;
    cin >> g00 >> g01 >> g02 >> g10 >> g12 >> g20 >> g21 >> g22;
    int mid = 0;
    vector<int> cnt(1000, 0);
    mid = (g20 + g02) / 2;
    cnt[mid]++;
    mid = (g10 + g12) / 2;
    cnt[mid]++;
    mid = (g00 + g22) / 2;
    cnt[mid]++;
    mid = (g01 + g21) / 2;
    cnt[mid]++;

    int check = max_element(cnt.begin(), cnt.end()) - cnt.begin();

    if ((g20 + g02) / 2 == check)
        ans++;
    if ((g00 + g22) / 2 == check)
        ans++;
    if ((g10 + g12) / 2 == check)
        ans++;
    if ((g01 + g21) / 2 == check)
        ans++;
    //non-mid
    if ((g00 + g02) / 2 == g01)
        ans++;
    if ((g00 + g20) / 2 == g10)
        ans++;
    if ((g02 + g22) / 2 == g12)
        ans++;
    if ((g20 + g22) / 2 == g21)
        ans++;
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
