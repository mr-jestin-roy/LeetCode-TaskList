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

void solve()
{
    string s1,s2;
    cin>>s1>>s2;

    int n = s1.size();
    int ansPosition = 0;
    for(int i=0;i<n;i++){
        ansPosition += (s1[i] == '+'? 1 : -1);
    }

    int finalPosition = 0;
    int moves = 0; //number of moves
    for(int i=0;i<n;i++){
        if(s2[i] == '?')
            moves++;
        else{
            finalPosition += (s2[i]== '+'? 1:-1);
        }
    }
    //uses combinatorics for formula & bit masks for calculations
    int distance = ansPosition - finalPosition;
    double ans;
    if((distance+moves)%2 != 0 || moves < abs(distance))
        ans = 0;
    else{
        int m = (moves + abs(distance))/2;
        int c = 1;
        for(int i=0;i<m;i++){
            c *= moves-i;
        }
        for(int i=2;i<=m;i++){
            c/=i;
        }

        ans = (double)c/(1<<moves);
    }

    printf("%.12f",ans);
    cout<<endl;
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
    string s1,s2;
    cin>>s1>>s2;

    int n = s1.size();
    int ansPosition = 0;
    for(int i=0;i<n;i++){
        ansPosition += (s1[i] == '+'? 1 : -1);
    }

    int finalPosition = 0;
    int moves = 0; //number of moves
    for(int i=0;i<n;i++){
        if(s2[i] == '?')
            moves++;
        else{
            finalPosition += (s2[i]== '+'? 1:-1);
        }
    }
    //uses combinatorics for formula & bit masks for calculations
    int distance = ansPosition - finalPosition;
    double ans;
    if((distance+moves)%2 != 0 || moves < abs(distance))
        ans = 0;
    else{
        int m = (moves + abs(distance))/2;
        int c = 1;
        for(int i=0;i<m;i++){
            c *= moves-i;
        }
        for(int i=2;i<=m;i++){
            c/=i;
        }

        ans = (double)c/(1<<moves);
    }

    printf("%.12f",ans);
    cout<<endl;
    return 0;
}
