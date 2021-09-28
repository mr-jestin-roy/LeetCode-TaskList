#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

void solve()
{
    ll n;
        cin>>n;
        vl v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vvl ans;
        for(ll i=n-1;i>0;i--)
        {
            ll mx=-inf;
            ll ind=-1;
            for(ll j=0;j<=i;j++)
            {
                if(mx<v[j])
                {
                    mx=v[j];
                    ind=j;
                }
            }
            if(ind==i)
            {
                continue;
            }
            else{
                vl temp;
                vl tempv(n);
                for(ll j=0;j<=i;j++)
                {
                    tempv[j]=v[(j+ind+1)%(i+1)];
                }
                v=tempv;
                ans.push_back({1,i+1,ind+1});
            }
        }
        cout<<ans.size()<<"\n";
        for(auto itr:ans)
        {
            for(auto it:itr)
            {
                cout<<it<<" ";
            }
            cout<<"\n";
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

