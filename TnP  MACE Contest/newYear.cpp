#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;


void solve () {
	ll n;
	cin >> n;
	for (ll i = 0; i <= 1000; i++) {
		ll secondTerm = n - (2020 * i);
		if (secondTerm < 0) break;
		if (secondTerm % 2021 == 0) {
			cout << "YES" << "\n";
			return;
		}
	}
	cout << "NO" << "\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {

		solve();
	}
	return 0;
}