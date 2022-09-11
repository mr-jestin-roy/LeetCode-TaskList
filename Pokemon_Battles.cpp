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
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    vector<int> arr1(n), brr1(n);
    arr1 = a, brr1 = b;
    sort(all(arr1));
    sort(all(brr1));

    arr1.erase(unique(all(arr1)), arr1.end());
    brr1.erase(unique(all(brr1)), brr1.end());
    for (auto &ai : a)
    {
        ai = lower_bound(all(arr1), ai) - arr1.begin();
    }
    for (auto &bi : b)
    {
        bi = lower_bound(all(brr1), bi) - brr1.begin();
    }
    vector<int> pAns(n), q(n);
    vector<int> curr(n);

    for (int i = 0; i < n; i++)
    {

        q[b[i]] = i;
        curr[a[i]] = b[i];
        pAns[i] = (b[i] + a[i]);
    }

    vector<int> r; // for inserting
    for (int i = 0; i < n; i++)
    {
        r.insert(upper_bound(all(r), curr[i]), curr[i]);
        pAns[q[curr[i]]] -= lower_bound(all(r), curr[i]) - r.begin();
    }
    int tempMax = 0, ans = 0;
    for (auto i : pAns)
        tempMax = max(i, tempMax);

    for (auto i : pAns)
        if (i == tempMax)
            ans++;

    cout << ans << endl;
}
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n), brr(n), temp1(n), temp2(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         // temp1[i] = arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin >> brr[i];
//         // temp2[i] = brr[i];
//     }

//     sort(temp1.begin(), temp1.end());

//     sort(temp2.begin(), temp2.end());

//     temp1.erase(unique(temp1.begin(), temp1.end()), temp1.end());

//     temp2.erase(unique(temp2.begin(), temp2.end()), temp2.end());

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = lower_bound(temp1.begin(), temp1.end(), arr[i]) - temp1.begin();
//     }

//     for (int i = 0; i < n; i++)
//     {
//         brr[i] = lower_bound(temp2.begin(), temp2.end(), brr[i]) - temp2.begin();
//     }

//     int temp = 0, ans = 0;

//     vector<int> p(n), q(n), r, crr(n);

//     for (int i = 0; i < n; i++)
//     {
//         crr[arr[i]] = brr[i];
//         p[i] = arr[i] + brr[i];
//         q[brr[i]] = i;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         r.insert(upper_bound(r.begin(), r.end(), crr[i]), crr[i]);
//         p[q[crr[i]]] -= lower_bound(r.begin(), r.end(), crr[i]) - r.begin();
//     }

//     for (auto i : p)
//     {
//         temp = max(i, temp);
//     }

//     for (auto i : p)
//     {
//         ans += (i == temp);
//     }

//     cout << ans << endl;
// }
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
