#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;				//manimujm sum of distinct no.s 123456789 =>45
	if (n > 45) {
		cout << "-1" << endl;
		return;
	}
	string s = "";
	for (int i = 9; i >= 1; i--) {
		if (n <= 9 && n <= i)
		{
			s += to_string(n);
			n = 0;
			break;
		}
		else {
			s += to_string(i);
			n = n - i;
		}
	}
	if (n) {
		cout << "-1" << endl;
		return;
	}
	reverse(s.begin(), s.end());
	cout << s << endl;

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}