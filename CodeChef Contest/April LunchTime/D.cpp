#include <bits/stdc++.h>

using namespace std;
#define MOD	1000000007
#define int long long


int32_t main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		sum = (sum + x + MOD) % MOD;
	}
	int q;
	cin >> q;
	while (q--) {
		int x;
		cin >> x;
		sum = (2 * sum) % MOD;
		cout << sum << endl;
	}
	return 0;
}