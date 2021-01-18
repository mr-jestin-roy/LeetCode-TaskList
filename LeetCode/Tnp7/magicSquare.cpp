#include <bits/stdc++.h>
using namespace std;

bool is_magic_square(vector<int> v)
{
	int a[3][3];
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			a[i][j] = v[3 * i + j];

	int s = 0;
	for (int j = 0; j < 3; ++j) {
		s += a[0][j];
	}

	for (int i = 1; i <= 2; ++i) {
		int temp = 0;
		for (int j = 0; j < 3; ++j)
			temp += a[i][j];
		if (temp != s)
			return 0;
	}

	for (int j = 0; j < 3; ++j) {
		int temp = 0;
		for (int i = 0; i < 3; ++i)
			temp += a[i][j];
		if (temp != s)
			return 0;
	}
	int temp = 0;
	for (int i = 0; i < 3; ++i)
		temp += a[i][i];
	if (temp != s)
		return 0;

	temp = 0;
	for (int i = 0; i < 3; ++i)
		temp += a[2 - i][i];
	if (temp != s)
		return 0;
	return 1;
}

void generateMagicSquare(vector<vector<int> > &magic_squares)
{
	vector<int> v(9);

	for (int i = 0; i < 9; ++i)
		v[i] = i + 1;


	do {
		if (is_magic_square(v)) {
			magic_squares.push_back(v);
		}
	} while (next_permutation(v.begin(), v.end()));
}

int diff(vector<int> a, vector<int> b)
{
	int res = 0;

	for (int i = 0; i < 9; ++i)
		res += abs(a[i] - b[i]);

	return res;
}


int final(vector<int> v)
{
	int res = INT_MAX;
	vector<vector<int> > magic_squares;
	generateMagicSquare(magic_squares);

	for (int i = 0; i < magic_squares.size(); ++i) {
		res = min(res, diff(v, magic_squares[i]));
	}
	return res;
}


int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> v;
	int temp;
	for (int i = 0; i < 9; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	cout << final(v) << endl;

	return 0;
}
