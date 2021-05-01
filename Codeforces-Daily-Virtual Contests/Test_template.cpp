#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll a, b, d;
		cin >> a >> b >> d;
		if (d >= abs(a - b) / min(a, b)) {
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}
