#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fr first
#define sc second
#define pii pair<int,int>
#define rep(i,a,b) for(int i = 0; i < b; i++)

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Sort in ascending order
    sort(all(a));
    
    // Baseline: kill everyone instantly
    int ans = n;
    
    // Try AOE damage equal to each monster's HP
    // After sorting, we consider each monster's HP as potential AOE damage
    for(int i = 0; i < n; i++) {
        // AOE damage = current monster's HP
        // Number of survivors = n - (i + 1)
        ans = min(ans, a[i] + (n - (i + 1)));
    }
    
    cout << ans << "\n";
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