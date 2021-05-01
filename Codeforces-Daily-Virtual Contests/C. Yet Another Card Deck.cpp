#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for (int &x : a) cin >> x;

	while (q--) {
		int x;
		cin >> x;
		int p = find(a.begin(), a.end(), x) - a.begin();
		cout << p + 1 << endl;
		rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
	}

}

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for (int &x : a) cin >> x;

	while (q--) {
		int x;
		cin >> x;
		int p = find(a.begin(), a.end(), x) - a.begin();
		cout << p + 1 << endl;
		rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
	}
}