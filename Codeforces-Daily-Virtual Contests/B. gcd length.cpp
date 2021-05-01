#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a , b, c;
	cin >> a >> b >> c;
	cout << int(pow(10, a - 1)) << ' ' << int(pow(10, c - 1))*int(pow(10, b - c) + 1) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}