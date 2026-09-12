#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    int m = n - 1;
    int max_val = m > 0 ? (1 << (32 - __builtin_clz(m))) - 1 : 0;

    int T = k ^ n;
    if (T > max_val) { cout << "NO\n"; return; }

    vector<int> S(n, 0);
    S[n - 1] = n;
    if (T > m) {
        int b = 31 - __builtin_clz(m);
        int A = 1 << b, B = T ^ A;
        S[n - 3] = min(A, B);
        S[n - 2] = max(A, B);
    } else if (T > 0) {
        S[n - 2] = T;
    }

    vector<int> p(n);
    vector<bool> used(n, false);
    int i = n - 1;
    while (i >= 1) {
        if (S[i] > S[i - 1]) { p[i] = S[i - 1]; used[p[i]] = true; }
        i--;
    }

    int curr = n - 1;
    i = n - 1;
    while (i >= 1) {
        if (S[i] == S[i - 1]) {
            while (used[curr]) curr--;
            p[i] = curr;
            used[curr] = true;
        }
        i--;
    }

    while (used[curr]) curr--;
    p[0] = curr;

    cout << "YES\n";
    i = 0;
    while (i < n) { cout << p[i] << " \n"[i == n - 1]; i++; }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) solve();
}
