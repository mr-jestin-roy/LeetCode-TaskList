#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
#define int long long int





int32_t main() {
	FAST;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		int count = 0;
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++) {
				if ((m % i) % j == (m % j) % i)
					count++;
			}
		}
		cout << count << endl;
	}
}