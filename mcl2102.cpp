#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n < 1) {
		cout << -1 << " ";
		exit(0);
	}
	while (n % 2 == 0) {
		cout << 2 << " ";
		n /= 2;
	}
	for (int i = 0; i <= sqrt(n); i + 2) {
		while (n % i == 0) {
			cout << i << " ";
			n = n / i;
		}
	}
	if (n > 2)
		cout << n << " ";
	return 0;
}