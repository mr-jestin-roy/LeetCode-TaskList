#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
	int n, w, wr;
	cin >> n >> w >> wr;

	map<int, int> mp;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i]]++;

	}
	if (wr >= w) {
		cout << "YES" << "\n";
		return;
	}
	else
	{
		w -= wr;
		for (int i = 0; i < n; i++)
		{
			if (mp[arr[i]] >= 2)
			{
				int count = mp[arr[i]];
				if (count % 2 == 0) {
					w -= count * arr[i];
				}
				else {
					w -= (count - 1) * arr[i];
				}
				mp[arr[i]] = 0;
			}
			if (w <= 0)
				break;
		}
		if (w <= 0) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}

int32_t main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}