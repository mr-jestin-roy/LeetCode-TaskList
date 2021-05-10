#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
#define int long long int

int gcd(int a, int b)
{
	// Everything divides 0
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	// base case
	if (a == b)
		return a;

	// a is greater
	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}
void solve() {
	int n;
	cin >> n;
	int a[n + 1];
	int x = 1e9 + 7;
	int pos = -1;
	for (int i = 0; i <= n; i++) {
		cin >> a[i];
		if (a[i] < x)
		{
			x = a[i];
			pos = i;
		}
	}
	cout << n - 1 << endl;
	for (int i = 1; i <= n; i++) {
		if (i == pos)	continue;
		cout << pos << ' ' << i << ' ' << x << x + abs(pos - i) << "\n";
	}
}


int32_t main() {
	FAST;
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