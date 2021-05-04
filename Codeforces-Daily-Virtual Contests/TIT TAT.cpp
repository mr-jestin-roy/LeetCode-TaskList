#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int i = 0;
		if (a[i] < k) {
			k -= a[i];
			a[n - 1] += a[i];
			a[i] = 0;
		}
		else
		{
			a[i] -= k;
			a[n - 1] += k;
			k = 0;
		}
		for (auto i : a)
			cout << a[i] << " ";
	}
}