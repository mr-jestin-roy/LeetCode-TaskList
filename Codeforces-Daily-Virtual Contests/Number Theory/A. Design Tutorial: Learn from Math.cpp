#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	int n;
	cin >> n;
	if (n >= 12) {
		if (n % 2 == 0) {
			cout << 4 << " " << (n - 4);
		}
		else
			cout << 9 << " " << (n - 9);
	}
}