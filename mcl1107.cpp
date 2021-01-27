#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int searched;
	cin >> searched;
	for (int i = 0; i < n; i++) {
		if (a[i] == searched) {
			cout << a[i - 1] << "\n" << a[i + 1] << endl;
			break;
		}
	}
}