#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<pair<int, int>> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i].first >> a[i].second;
		}
		sort(a.begin(), a.end());
		pair<int, int> cur = make_pair(0, 0);
		string ans;
		bool ok = true;
		for (int i = 0; i < n; ++i) {
			int r = a[i].first - cur.first;
			int u = a[i].second - cur.second;
			if (r < 0 || u < 0)
			{
				cout << "NO" << endl;
				ok = false;
				break;
			}
			ans += string(r, 'R');
			ans += string(u, 'U');
			cur = a[i];
		}
		if (ok) {
			cout << "YES" << endl;
			cout << ans << endl;
		}
	}
	return 0;
}