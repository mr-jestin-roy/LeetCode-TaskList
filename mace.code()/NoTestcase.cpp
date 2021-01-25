#include <bits/stdc++.h>

using namespace std;

double area (int a, int b, int c)
{
	double  p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	int a[3], b[3], c[3];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[j] >> b[j] >> c[j];
		}
	}
	int area

	return 0;
}