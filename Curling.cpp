// Author: Jestin Roy
// Handle Name: jestinroy3
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
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
// #define int long long

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void extendgcd(ll a, ll b, ll *v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
} // pass an arry of size1 3
ll mminv(ll a, ll b)
{
    ll arr[3];
    extendgcd(a, b, arr);
    return arr[0];
} // for non prime b
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
bool revsort(ll a, ll b) { return a > b; }
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact)
{
    ll val1 = fact[n];
    ll val2 = ifact[n - r];
    ll val3 = ifact[r];
    return (((val1 * val2) % m) * val3) % m;
}
void google(int t) { cout << "Case #" << t << ": "; }
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} // only for prime m
ll phin(ll n)
{
    ll number = n;
    if (n % 2 == 0)
    {
        number /= 2;
        while (n % 2 == 0)
            n /= 2;
    }
    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            number = (number / i * (i - 1));
        }
    }
    if (n > 1)
        number = (number / n * (n - 1));
    return number;
} // O(sqrt(N))
ll getRandomNumber(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rng); }
/*--------------------------------------------------------------------------------------------------------------------------*/

void solve()
{ // start solving the problem from here on
    double rs = 0, rh = 0;
    cin >> rs >> rh;
    // int n, m;
    // cin >> n;
    // vector<int> a;
    // int cntA = 0;
    // if (n != 0)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         int x, y;
    //         cin >> x >> y;
    //         // a.push_back(make_pair(x, y));
    //         int ch = pow(x, 2) + pow(y, 2);
    //         if (ch <= pow((rh + rs), 2))
    //         {
    //             cntA += 1;
    //             // a.push_back(ch);
    //             // minA = min(minA, sqrt(pow(x, 2) + pow(y, 2) * 1.0));
    //         }
    //     }
    // }
    // int cntB = 0;
    // cin >> m;
    // vector<int> b;
    // if (m != 0)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         int x, y;
    //         cin >> x >> y;
    //         // b.push_back(make_pair(x, y));
    //         int ch = pow(x, 2) + pow(y, 2);
    //         if (ch <= pow((rh + rs), 2))
    //         {
    //             cntB += 1;
    //             b.push_back(ch);
    //             // minB = min(minB, sqrt(pow(x, 2) + pow(y, 2)));
    //         }
    //     }
    // }

    double eq = rs + rh;
    int n, m;
    cin >> n;
    double ans1 = 0, ans2 = 0;
    vector<double> v1, v2;
    for (int i = 0; i < n; ++i)
    {
        double x, y;
        cin >> x >> y;
        double ans = sqrt(pow(x, 2) + pow(y, 2));

        if (ans <= eq)
        {
            v1.push_back(ans);
        }
    }
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        double x, y;
        cin >> x >> y;
        double ans = sqrt(pow(x, 2) + pow(y, 2));
        if (ans <= eq)
        {

            v2.push_back(ans);
        }
    }
    for (int i = 0; i < v2.size(); i++)
    {
        int stop = true;
        for (int j = 0; j < v1.size(); j++)
        {
            if (v1[j] < v2[i])
            {
                stop = false;
                break;
            }
        }
        if (stop)
            ans2++;
    }
    for (int i = 0; i < v1.size(); i++)
    {
        int stop = true;
        for (int j = 0; j < v2.size(); j++)
        {
            if (v2[j] < v1[i])
            {
                stop = false;
                break;
            }
        }
        if (stop)
            ans1++;
    }
    // cout << cntA << " " << cntB << endl;
    cout << ans1 << " " << ans2 << endl;
}

signed main()
{
    fastio();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        google(i);
        solve();
    }
}