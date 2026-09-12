#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    if (n < k << 1) { cout << -1 << "\n"; return; }
    int ans = 0, i = k - 1;
    while (i >= 0) ans += (s[i--] == 'L');
    i = n - 1;
    while (i >= n - k) ans += (s[i--] == 'R');
    cout << ans << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) solve();
}
