#pragma GCC optimize("Ofast")
#pragma GCC optimize ("O3")
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
// Function to calculate XOR of
// numbers in the range [1, n]
int bitwiseXorRange(int n)
{
 
    // If n is divisible by 4
    if (n % 4 == 0)
        return n;
 
    // If n mod 4 is equal to 1
    if (n % 4 == 1)
        return 1;
 
    // If n mod 4 is equal to 2
    if (n % 4 == 2)
        return n + 1;
 
    return 0;
}
 
// Function to find XOR of even
// numbers in the range [l, r]
int evenXorRange(int l, int r)
{
 
    // Stores XOR of even numbers
    // in the range [1, l - 1]
    int xor_l;
 
    // Stores XOR of even numbers
    // in the range [1, r]
    int xor_r;
 
    // Update xor_r
    xor_r
        = 2 * bitwiseXorRange(r / 2);
 
    // Update xor_l
    xor_l
        = 2 * bitwiseXorRange((l - 1) / 2);
 
    return xor_l ^ xor_r;
}
void solve()
{
    int n; cin>>n; 
    if(n%4 == 3 || n%4 == 2)
        cout<<3<<endl;
    else if(n%4 == 1){
        cout<<n<<endl;
    }
    else if(n%4==0)
        cout<<n+3<<endl;
    
    return;
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
#ifdef NCR
    init();
#endif
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
