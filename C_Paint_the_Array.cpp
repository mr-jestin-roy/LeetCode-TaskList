#include<bits/stdc++.h>
using namespace std ;

#define ll              long long 
#define pb              push_back
#define all(v)          v.begin(),v.end()
#define sz(a)           (ll)a.size()
#define F               first
#define S               second
#define INF             2000000000000000000
#define popcount(x)     __builtin_popcountll(x)
#define pll             pair<ll,ll>
#define pii             pair<int,int>
#define ld              long double

template<typename T, typename U> static inline void amin(T &x, U y){ if(y < x) x = y; }
template<typename T, typename U> static inline void amax(T &x, U y){ if(x < y) x = y; }

#ifdef LOCAL
#define debug(...) debug_out(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) 2401
#endif


void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto &i : a){
        cin >> i;
    }

    for(int j = 0; j < 2; ++j){
    	long long g = 0;
    	for(int i = j; i < n; i += 2){
    		g = __gcd(g, a[i]);
    	}
    	bool pos = true;
    	for(int i = j ^ 1; i < n; i += 2){
    		if ((a[i] % g) == 0){
    			pos = false;
    			break;
    		}
    	}
    	if (pos){
    		cout << g << "\n";
    		return;
     	}
    }
    cout << 0 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef runSieve
        sieve();
    #endif
    #ifdef NCR
        initncr();
    #endif
    int TESTS = 1;
    cin >> TESTS;
    while(TESTS--) {
        solve();
    }
    return 0;
}