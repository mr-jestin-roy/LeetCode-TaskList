#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
	ll r, b, d;
	cin >> r >> b >> d;
	if (abs(r - b) <= d) {
		cout << "YES" << endl;
		return;
	}
	if (r > b)	swap(r, b);
	if (r * (d + 1LL) < b) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
