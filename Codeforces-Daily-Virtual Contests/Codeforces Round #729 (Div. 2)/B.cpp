#include <bits/stdc++.h>

using namespace std;
bool isSquare(int x) {
	int y = sqrt(x);
	return y * y == x;
}

int32_t main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n % 2 == 0 && isSquare(n / 2))
			cout << "YES" << endl;
		else if (n % 4 == 0 && isSquare(n / 4))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}