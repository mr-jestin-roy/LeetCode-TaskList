#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	int n = 45768;
	int digit_count = float(log10(n)) + 1;
	cout << digit_count << " " << gcd(4, 6) << endl;
	return 0;
}