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
    unordered_map<string, int> mpp;
    vector<string> s(n);
    for (auto &i : s)
    {
        cin >> i;
        mpp[i] = 1;
    }

    string ans = "";

    for (auto &it : s)
    {
        bool flag = false;
        for (int j = 0; j < it.size(); ++j)
        {
            if (mpp[it.substr(0, j)] == 1 && mpp[it.substr(j, it.size())] == 1)
            {
                flag = true;
                break;
            }
        }
        ans += flag ? "1" : "0";
    }

    // for (int i = 0; i < s.size(); i++)
    // {
    //     for (int j = 0; j < s[i].size(); j++)
    //     {
    //         int m = s[i].size();
    //         string lh = s[i].substr(0, j);
    //         string rh = s[i].substr(j + 1, n);
    //         if (mpp.find(lh) != mpp.end() && mpp.find(rh) != mpp.end())
    //         {
    //             // cout << "#" << s[i] << endl;
    //             ans[i] = '1';
    //         }
    //     }
    // }

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
