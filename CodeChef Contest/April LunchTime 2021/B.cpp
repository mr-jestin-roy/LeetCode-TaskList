#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	int cnta = 0;
	int cntb = 0;

	string s;
	string chk = "EQUINOX";
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
			cnta += a;
		else
			cntb += b;
	}
	if (cnta == cntb)	cout << "DRAW" << "\n";
	else if (cnta > cntb)	cout << "SARTHAK" << "\n";
	else	cout << "ANURADHA" << "\n";
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