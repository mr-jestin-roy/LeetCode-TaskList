#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1000000007
#define ll long long int

bool perfectSquare(int k) {
	for (int i = 1; i * i <= k; i++) {
		if (i * i == k)
			return true;
	}
	return false;
}

void solve() {
	int n;
	cin >> n;
	int flag = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < s.length(); j++)
		{
			if (s[i] == s[j])
				flag = 1;
		}
	}
	cout << h.size() << endl;

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