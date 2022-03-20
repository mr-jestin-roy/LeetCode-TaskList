#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1000000007
#define int long long int

// int power(int x, int y, int p) {
// 	int res = 1;
// 	x = x % p;
// 	if (x == 0)
// 	{
// 		return 0;
// 	}
// 	while (y != 0) {
// 		if (y & 1)
// 		{
// 			res = (res * x) % p;
// 		}
// 		y = y >> 1;
// 		x = (x * x) % p;
// 	}
// 	return res;
// }


void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int s = (a + 1) % c;

	if (b % c == 0 || b % c == s)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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