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
string removeDuplicateLetters(string s)
{
    string ans = "";
    vector<int> dict(256, 0);
    vector<bool> visited(256, false);

    for (auto ch : s)
        dict[ch]++;
    /** the key idea is to keep a monotically increasing sequence **/

    for (auto c : s)
    {
        dict[c]--;
        /** to filter the previously visited elements **/
        if (visited[c])
            continue;
        while (c < ans.back() && dict[ans.back()])
        {
            visited[ans.back()] = false;
            ans.pop_back();
        }
        ans += c;
        visited[c] = true;
    }

    return ans;
}

void solve()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> a(r, vector<int>(c));

    queue<char> q;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
            q.push(a[i][j] + '0');
        }
    }
    string s;
    while (!q.empty())
    {
        s += (q.front());
        q.pop();
    }
    cout << removeDuplicateLetters(s) << endl;
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
