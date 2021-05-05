#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1000000007
#define int long long int

int pow(int n, int k)
{
	if (k == 0)
		return 1;

	int temp = pow(n, k / 2);
	if (k & 1)
		return (((n * temp) % mod) * temp) % mod;

	return (temp * temp) % mod;
}

int32_t main() {
	FAST;
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;

		cout << pow(n, k) << endl;
	}
}