#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		bool ok = false;
		int a, b, n;
		cin >> a >> b >> n;
		if (n >= abs(a) + abs(b) and (n - (abs(a) + abs(b))) % 2 == 0)
			return true;
		if (ok) {
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}
