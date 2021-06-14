#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846


const int M = 1e9 + 7;


void solve () {
	ll n;
	cin >> n;
	for (ll i = 1; i <= 60; i++) {
		if ((1LL << i) == n) {
			cout << "NO" << "\n";
			return;
		}
	}
	cout << "YES" << "\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout << fixed;
	cout << setprecision(10);

	int test = 1;
	cin >> test;
	for (int i = 1; i <= test; i++) {

		solve();
	}
	return 0;
}