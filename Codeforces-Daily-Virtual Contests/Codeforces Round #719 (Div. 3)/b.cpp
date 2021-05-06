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
	int count = 0;
	for (int i = 1; i <= 9; i++)
	{
		for (int x = 1; x <= 9; x++)
		{
			count += stoi(string(i, '0' + x)) <= n;
		}
	}
	cout << count << endl;
}

int32_t main() {
	FAST;
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