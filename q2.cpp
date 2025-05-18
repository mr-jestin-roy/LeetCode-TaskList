#include <iostream>
#include <algorithm>
using namespace std;

// Calculate minimum cuts needed to reduce a grid from n×m to 1×1
// when the monster can be placed optimally
int min_cuts(long long n, long long m) {
    int cuts = 0;
    while (n > 1 || m > 1) {
        if (n > m) {
            n = (n + 1) / 2;
        } else {
            m = (m + 1) / 2;
        }
        cuts++;
    }
    return cuts;
}

void solve() {
    long long n, m, a, b;
    cin >> n >> m >> a >> b;
    
    // For the first cut, Mouf can choose to cut in a way that leaves the smallest possible grid
    // After that, Fouad will move the monster to maximize the remaining turns
    
    int ans = INT_MAX;
    
    // Try cutting horizontally
    // If monster is in row a, we can cut to leave either rows 1 to a or rows a to n
    ans = min(ans, 1 + min_cuts(a, m));       // Keep rows 1 to a
    ans = min(ans, 1 + min_cuts(n - a + 1, m)); // Keep rows a to n
    
    // Try cutting vertically
    // If monster is in column b, we can cut to leave either columns 1 to b or columns b to m
    ans = min(ans, 1 + min_cuts(n, b));       // Keep columns 1 to b
    ans = min(ans, 1 + min_cuts(n, m - b + 1)); // Keep columns b to m
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
} 