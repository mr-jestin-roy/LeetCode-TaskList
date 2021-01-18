#include <bits/stdc++.h>

using namespace std;

/* RECURSIVE METHOD
int countWays(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	else if (n == 2) {
		return 2;
	}
	else
		return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}
*/

int countWays(int n) {
	int result[n + 1];
	result[0] = 1;
	result[1] = 1;
	result[2] = 2;
	for (int i = 3; i <= n; i++) {
		result[i] = result[i - 1] + result[i - 2] + result[i - 3];
	}
	return result[n];
}


int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << countWays(n) << endl;
	return 0;
}