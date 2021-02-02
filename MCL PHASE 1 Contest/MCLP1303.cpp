#include <bits/stdc++.h>
#include <math.h>

using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x, y, z;
	cin >> x >> y >> z;
	int sup = 0.3 * x;
	int income = sup * y;
	int profit = income - z;
	cout << profit << endl;


	return 0;
}