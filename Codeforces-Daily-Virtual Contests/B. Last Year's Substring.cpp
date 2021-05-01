#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i <= 4; i++) {
		string t1 = s.substr(0, i);
		string t2 = s.substr(n - 4 + i);
		string ans = t1 + t2;
		if (ans == "2020") {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}