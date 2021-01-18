#include <bits/stdc++.h>

using namespace std;

void lucasNumbers(int &n) {
	int a = 2;
	int b = 1;
	for (int i = 0; i < n; i++) {
		if (i == 0)
			cout << a << endl;
		else if (i == 1)
			cout << b << endl;
		else if (i > 1) {
			int c = a + b;
			a = b;
			b = c;
			cout << c << endl;
		}
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	lucasNumbers(n);
	return 0;
}