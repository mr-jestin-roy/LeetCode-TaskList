#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 2)
			count++;
	}
	cout << n - count << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}