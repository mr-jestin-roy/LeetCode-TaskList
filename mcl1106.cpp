#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	string b[n];
	int a[n];
	int house = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		if (b[i] == "No")
			house++;
	}
	if (house == n) {
		cout << "Housefull" << endl;
	}
	else {
		int rating = 5;
		for (int i = 0; i < n; i++) {
			if (b[i] == "Yes" && a[i] > rating) {
				cout << "Good" << endl;
				exit(0);
			}
		}
		cout << "Bad" << endl;
	}
}