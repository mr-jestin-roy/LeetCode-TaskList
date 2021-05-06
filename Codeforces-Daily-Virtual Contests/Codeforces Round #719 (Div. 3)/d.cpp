#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
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
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] - a[i] == j - i && i < j)
				count++;
		}
	}
	cout << count << endl;
}

int32_t main() {
	fast;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}