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
int countSubarraysof1and0(vector<int> a, int n)
{
    int count1 = 0, number1 = 0;

    // Iterate in the array to find count
    // of subarrays with only 1 in it
    for (int i = 0; i < n; i++)
    {
        // check if array element
        // is 1 or not
        if (a[i] == 1)
        {
            count1 += 1;
        }
        else
        {
            number1 += (count1) * (count1 + 1) / 2;
            count1 = 0;
        }
    }

    // After iteration completes,
    // check for the last set of subarrays
    if (count1)
        number1 += (count1) * (count1 + 1) / 2;

    return number1;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0;
    vector<int> b(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] - 1 >= i)
        {
            ans++;
            b[i] = 1;
        }
        else if (a[i] > 0)
        {
            ans++;
        }
    }
    cout << "#b";
    for (auto i : b)
    {
        cout << i;
    }
    cout << endl;
    cout << ans << "#";
    ans = max(ans, countSubarraysof1and0(b, n));

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
