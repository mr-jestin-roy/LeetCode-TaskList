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
    string str;
    cin>>str;
    int cnt1 =0;
    int cnt2 = 0;
    int n = str.size();
    for(int i=0;i<n-1;i++){
        if((str[i]=='a' && str[i+1]=='b'))
        {
            cnt1++;
        }   
        else if((str[i]=='b' && str[i+1]=='a'))
            cnt2++;
    }
    if(cnt1 == cnt2){
        cout<<str<<endl;
        return;
    }
    else{
        if(cnt1 > cnt2){
            for(int i=n-1;i>=0;i--){
                if((str[i-1]=='a' && str[i]=='b'))
                {   str[i]='a';
                    cnt1--;       
                }
                else if((str[i-1]=='b' && str[i]=='a'))
                {   str[i]='b';
                    cnt2--;       
                }
             
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                
             
            }
        }
    }
    
    cout<<str<<endl;

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

