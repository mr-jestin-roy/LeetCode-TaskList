#include <bits/stdc++.h>

using namespace std;

void removeAllChar(string s) {
	int j = 0;
	for (int i = 0; i < s.size(); i++) {
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
			s[j] = s[i];
			j++;
		}
	}
	cout << s.substr(0, j);
}


int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	removeAllChar(s);
	return 0;
}