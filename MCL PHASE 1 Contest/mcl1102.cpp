#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int reverseNum = 0;
	int r;
	while (n != 0) {
		r = n % 10;
		reverseNum = reverseNum * 10 + r;
		n /= 10;
	}
	cout << reverseNum << endl;
}