#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

using namespace std;
using ll = long long;

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,sse4.2,popcnt,fma")

struct Fenwick {
    int n;
    vector<int> f;
    Fenwick(int _n): n(_n), f(n+1,0) {}
    void update(int i,int v){ for(;i<=n;i+=i&-i) f[i]+=v; }
    int query(int i) const { int s=0; for(;i>0;i-=i&-i) s+=f[i]; return s; }
    int rangeQuery(int l,int r) const { return r<l?0:query(r)-query(l-1); }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N+1), P(N+1);
        for(int i=1;i<=N;i++){
            cin >> A[i];
            P[A[i]] = i;
        }

        // Precompute inv_val_pref[v] and c[v]
        vector<ll> inv_pref(N+2, 0), c(N+2, 0);
        {
            Fenwick fw(N);
            for(int v=1; v<=N; v++){
                int pos = P[v];
                // c[v] = # of u < v with P[u] > pos
                c[v] = fw.rangeQuery(pos+1, N);
                inv_pref[v] = inv_pref[v-1] + c[v];
                fw.update(pos, 1);
            }
        }

        // Precompute inv_val_suf[v] and c2[v]
        vector<ll> inv_suf(N+2, 0), c2(N+2, 0);
        {
            Fenwick fw(N);
            for(int v=N; v>=1; v--){
                int pos = P[v];
                // c2[v] = # of u > v with P[u] < pos
                c2[v] = fw.rangeQuery(1, pos-1);
                inv_suf[v] = inv_suf[v+1] + c2[v];
                fw.update(pos, 1);
            }
        }

        ll invA = inv_pref[N];  // total inversions in A

        // answer queries
        while(Q--){
            int L, R;
            cin >> L >> R;
            if(L == R){
                cout << 0 << "\n";
            } else {
                // inv(B) = invA
                //         - inv_pref[L-1]
                //         - inv_suf[R+1]
                //         - c[L]
                //         - c2[R]
                ll ans = invA
                       - inv_pref[L-1]
                       - inv_suf[R+1]
                       - c[L]
                       - c2[R];
                cout << ans << "\n";
            }
        }
    }
    return 0;
}
