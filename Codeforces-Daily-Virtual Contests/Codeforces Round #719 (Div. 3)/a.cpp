#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1000000007
#define ll long long int



void solve() {
	int n;
	cin >> n;
	string s;	cin >> s;
	for (char c = 'A'; c <= 'Z'; c++)
	{
		int first = n, last = -1;
		for (int i = 0; i < n; i++) {
			if (s[i] == c)
			{
				first = min(first, i);
				last = max(last, i);
			}
		}
		for (int i = first; i <= last; i++)
		{
			if (s[i] != c)
			{
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;

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