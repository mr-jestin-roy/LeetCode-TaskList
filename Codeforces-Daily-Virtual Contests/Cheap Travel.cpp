#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	if (a * m <= b) {
		cout << a*n << endl;
	}
	else {
		cout << b*(m / n) + min(a * (n % m), b) << endl;
	}
	return 0;
}

// 2nd Method
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int a, b, c; int n;
// 		cin >> a >> b >> c >> n;
// 		if ((a + b + c + n) % 3 == 0 && n >= max({a, b, c}) * 3 - (a + b + c)) {
// 			cout << "YES" << endl;
// 		} else {
// 			cout << "NO" << endl;
// 		}
// 	}
// 	return 0;
// }