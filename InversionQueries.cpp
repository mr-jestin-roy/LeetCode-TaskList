#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long

// Fenwick Tree for range sum queries
struct FenwickTree {
    vector<int> bit;
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n + 1, 0);
    }

    void add(int idx, int val) {
        for (++idx; idx <= n; idx += idx & -idx)
            bit[idx - 1] += val;
    }

    int sum(int idx) {
        int ret = 0;
        for (++idx; idx > 0; idx -= idx & -idx)
            ret += bit[idx - 1];
        return ret;
    }

    // Get sum in range [l, r]
    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    while(q--) {
        int l, r;
        cin >> l >> r;
        
        // Create array B according to the rules
        vector<int> b(n);
        for(int i = 0; i < n; i++) {
            if(a[i] < l) b[i] = l;
            else if(a[i] > r) b[i] = r;
            else b[i] = a[i];
        }
        
        // Count inversions directly
        int inversions = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(b[i] > b[j]) {
                    inversions++;
                }
            }
        }
        
        cout << inversions << "\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
} 