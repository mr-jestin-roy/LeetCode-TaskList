#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, a, b;
	cin >> n;
	string s;
	string chk = "EQUINOX";
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s.find('e') != std::string::npos)
			cout << "Found";
		else
			cout << "Not Found";
	}

	for (int i = 0; i < chk.length(); i++) {
		for (int j = 0; j < s[j].length(); i++)
		{

		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}