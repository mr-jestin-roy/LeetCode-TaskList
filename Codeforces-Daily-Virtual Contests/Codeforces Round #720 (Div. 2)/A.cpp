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
		int A, B;
		cin >> A >> B;
		if (B == 1) {
			cout << "NO" << endl;
			continue;
		}
		else
		{
			cout << "YES" << endl;
			if (B != 2) {		//1 is factor of each number
				cout << A*(B - 1) << " " << A << " " << A*B << endl;
			}
			else {
				cout << A * 9 << " " << A << " " << A * 10 << endl;
			}
		}
	}
}