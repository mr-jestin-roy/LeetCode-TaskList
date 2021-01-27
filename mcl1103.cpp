#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, r;
		cin >> n >> r;
		int a[n];
		bool found = false;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if ((r / 4) == a[i]) {
				found = true;
			}
		}
		if (found) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
}