#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve () {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>a(k);
    vector<int>b(k);
    for (int i = 0; i < k; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
        cin >> b[i];
    vector<int>G(m + 1);
    vector<int>B(n + 1);
    for (int i = 0; i < k; i++) {
        G[b[i]]++;
    }
    for (int i = 0; i < k; i++) {
        B[a[i]]++;
    }
    ll total = 0;
    for (int i = 0; i < k; i++) {
        total += ((k - 1) - (G[b[i]] - 1) - (B[a[i]] - 1));
    }
    cout << total / 2 << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {

        solve();
    }
    return 0;
}