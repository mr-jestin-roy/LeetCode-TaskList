#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1000000007
#define int long long int

bool perfectSquare(int k) {
	for (int i = 1; i * i <= k; i++) {
		if (i * i == k)
			return true;
	}
	return false;
}

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);

	bool found = true;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (!perfectSquare(a[i]))
			found = false;

	}

	if (found)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}

int32_t main() {
	FAST;
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}