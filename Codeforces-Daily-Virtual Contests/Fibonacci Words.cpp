#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<int> element;
	for (char c : s) {
		element.push_back(c - 'A');
	}
	for (int i = 2; i < s.length(); i++) {
		if (element[i] != (element[i - 1] + element[i - 2]) % 26) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}