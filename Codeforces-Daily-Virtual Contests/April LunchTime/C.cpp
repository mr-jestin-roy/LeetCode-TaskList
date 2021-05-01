#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int one = 0;
	int zero = 0;

	string s;
	cin >> s;
	int flag = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			one++;
		}
		else
			zero++;

		if (one >= zero) {
			flag = 1;
			break;
		}

	}
	if (flag == 1)	cout << "YES" << "\n";
	else cout << "NO" << "\n";
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}