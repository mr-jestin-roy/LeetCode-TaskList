#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int a[3]; int n;
		cin >> a[0] >> a[1] >> a[2] >> n;
		sort(a, a + 3);
		n -= 2 * a[2] - a[1] - a[0];
		if (n < 0 || n % 3 != 0)
		{
			cout << "NO" << endl;
		}
		else
			cout << "YES" << endl;
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