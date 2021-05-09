#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1000000007
#define ll long long int

int twiceDestruction(vector<int> a, int A, int B) {
	int maxa = *max_element(a.begin(), a.end());
	int count = 1;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] < 0)
			continue;
		else
		{
			if (a[i] < maxa)
			{
				a[i] -= B;
			}
			else
				a[i] -= A;

			count++;
		}
	}
	return count;

}

int main() {
	FAST;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int A, B;
	cin >> A;
	cin >> B;
	int result = twiceDestruction(a, A, B);
	cout << result;

	return 0;
}