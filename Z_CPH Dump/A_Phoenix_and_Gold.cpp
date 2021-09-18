#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int a[n], sum = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		if (sum == x) {
			cout << "NO" << endl;
			continue;
		}
		sum = 0;
		for (int i = 1; i < n; i++) {
			sum += a[i];
			if (sum == x) {
				swap(a[i], a[i + 1]);
				break;
			}
		}
		cout << "YES" << endl;
		for (int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << "\n";
	}
	return 0;
}
