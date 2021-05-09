#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1000000007
#define int long long int

bool perfectSquare(int k) {
	for (int i = 1; i * i <= k; i++) {
		if (i * i == k)
			return true;
	}
	return false;
}

void solve() {
	int n;
	cin >> n;
	if (n == 2) {
		cout << -1 << endl;
		return;
	}
	int cur = 1;
	vector<vector<int>> ans(n + 1, vector<int>(n + 1, 0));

	for (int i = 1; i <= n; i++) {	//PUTS VALUES AT ALL EVEN PLACES
		for (int j = 1; j <= n; j++) {
			if ((i + j) % 2 == 0)
				ans[i][j] = cur++;
		}
	}
	for (int i = 1; i <= n; i++) {	//PUTS VALUES AT ALL ODD PLACES
		for (int j = 1; j <= n; j++) {
			if ((i + j) % 2)
				ans[i][j] = cur++;
		}
	}
	for (int i = 1; i <= n; i++) {	//PUTS VALUES AT ALL EVEN PLACES
		for (int j = 1; j <= n; j++) {
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}

}

int32_t main() {
	fast;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}