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
    a = (b > a) ? b : a;
    return a;
}
template <typename T, typename T1>
T amin(T &a, T1 b)
{
    a = (b < a) ? b : a;
    return a;
}

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

int power(int base, int exp)
{
    int res = 1;
    base %= M;
    while (exp > 0)
    {
        res = (exp & 1) ? (res * base) % M : res;
        base = (base * base) % M;
        exp >>= 1;
    }
    return res;
}

void solve()
{
    // -1's always form a prefix of the (non-decreasing) array since -1 < any positive value.
    // -1 block of size C contributes alternating-sum 0 (even count) or -1 (odd count).
    // Positive block (non-decreasing) can only reach alternating-sum 0 or -1;
    // -1 requires an adjacent pair of consecutive distinct values (v, v+1) as the cancel.
    // Duplicate copies of each distinct value can be freely included/excluded: factor 2^(N_pos - D).
    int n;
    cin >> n;
    vector<int> a(n);
    int C = 0;
    vector<int> pos;

    int i = 0;
    while (i < n)
    {
        cin >> a[i];
        if (a[i] != -1)
            pos.pb(a[i]);
        else
            C++;
        i++;
    }

    int N_pos = sz(pos);
    int D = 0;
    int K = 0;

    if (N_pos > 0)
    {
        vector<int> uniq_pos = pos;
        uniq(uniq_pos);
        D = sz(uniq_pos);
        int j = 0;
        while (j < D - 1)
        {
            K += (uniq_pos[j + 1] == uniq_pos[j] + 1);
            j++;
        }
    }

    int E_minus1 = (C == 0) ? 1 : power(2, C - 1);
    int O_minus1 = (C == 0) ? 0 : power(2, C - 1);
    int P = power(2, N_pos - D);

    int ans = (E_minus1 + (K * O_minus1) % M) % M;
    ans = (ans * P) % M;

    cout << ans << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
