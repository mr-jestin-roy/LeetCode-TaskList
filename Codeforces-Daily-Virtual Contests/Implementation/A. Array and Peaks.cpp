#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1000000007
#define int long long int

int32_t main() {
	fast;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> ans(n + 1);
		int num = n;
		for (int i = 2; i < n; i += 2)
		{
			if (k == 0)break;
			ans[i] = num--;
			k--;
		}
		if (k)
		{
			cout << -1 << endl;
			continue;
		}
		int cur = 1;
		for (int i = 1; i <= n; i++)
		{
			if (!ans[i])
				ans[i] = cur++;
		}

		for (int i = 1; i <= n; i++)
			cout << ans[i] << " ";
		cout << endl;
	}
}