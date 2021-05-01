#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<int>> a(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 && j == 0) continue;
			if (i == 0)	a[i][j] = a[i][j - 1] + 1;
			else if (j == 0)	a[i][j] = a[i - 1][j] + 1;
			else	a[i][j] = a[i - 1][j] + (j + 1);
		}
	}
	if (a[n - 1][m - 1] == k)	cout << "YES" << endl;
	else	cout << "NO" << endl;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
