#include <bits/stdc++.h>

using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int p, n, res = 0;
	cin >> p;
	cin >> n;
	res = (p * ((1 - pow(0.8, n))) / 0.2);
	cout << res;
	return 0;
}