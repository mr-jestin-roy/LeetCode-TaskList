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
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> o,e;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i&1){
            //odd parity position
           if(a[i]&1){
                o.push_back(1);
           }
           else{
                o.push_back(0);
           }
        }
        else{
            if(a[i]&1){
                e.push_back(1);
           }
           else{
                e.push_back(0);
           }
        }
    }
    int sumOdd = 0, sumEven =0;
    for(auto i:o){
        sumOdd += i;
    }
    for(auto i:e){
        sumEven += i;
    }
    if((o.size()==sumOdd) && (e.size() == sumEven)){
        //both odd 
        cout<<"YES"<<endl;
        return;
    }
    else if((sumOdd == 0) && (sumEven == 0)){
        //both even parity
        cout<<"YES"<<endl;
        return;
    }
    else if((o.size()==sumOdd) && (sumEven == 0)){
        cout<<"YES"<<endl;
        return;
    }
    else if((sumOdd == 0) && (e.size() == sumEven)){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
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
