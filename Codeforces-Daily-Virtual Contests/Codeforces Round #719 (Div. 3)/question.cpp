#include <bits/stdc++.h>
using namespace std;

unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int rent = 3000;
		int food = 0;
		if (n > 3) {
			rent += (n - 3) * 500;
		}
		for (int i = 0; i < n; i++) {
			if (a[i] >= 65) {
				food += (int)0.04 * a[i];
			}
			else
				food  += (int)0.03 * a[i];
		}
		int avg = (rent + food) / n;
		if (countSetBits(avg) % 2 == 0)
			cout << "O" << " "
			     else
				     cout << "E" << " ";
	}
	return 0;
}