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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> num;
    map<int, int> mp;
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<int> ans;
    rep(i, 0, n)
    {
        mp[a[i]] = i + 1;
        if (num.find(a[i]) == num.end())
        {
            num.insert(a[i]);
            ans.push_back(a[i]);
        }
    }
    int max_val = 1000;
    vector<bool> prime(max_val + 1, true);

    // Remaining part of SIEVE
    prime[0] = false;
    prime[1] = false;
    for (int p = 2; p * p <= max_val; p++)
    {

        // If prime[p] is not changed, then
        // it is a prime
        if (prime[p] == true)
        {

            // Update all multiples of p
            for (int i = p * 2; i <= max_val; i += p)
                prime[i] = false;
        }
    }
    int res = 0;
    rep(i, 0, ans.size())
    {
        rep(j, 0, ans.size())
        {
            if (__gcd(ans[i], ans[j]) == 1)
                res = max(res, mp[ans[i]] + mp[ans[j]]);
        }
    }
    if (res == 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << res << endl;
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
