#include <bits/stdc++.h>
#include <math.h>

using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x, y;
	cin >> x >> y;

	(x > 11) ? cout << x % 11 << endl : cout << 0 << endl;
	(y > 11) ? cout << y % 11 << endl : cout << 0 << endl;

	return 0;
}