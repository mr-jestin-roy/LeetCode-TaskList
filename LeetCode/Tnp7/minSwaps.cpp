#include <bits/stdc++.h>

using namespace std;

int minimumSwaps(int arr[], int n)
{
	pair<int, int> arrPos[n];
	for (int i = 0; i < n; i++)
	{
		arrPos[i].first = arr[i];
		arrPos[i].second = i;
	}

	sort(arrPos, arrPos + n);
	vector<bool> vis(n, false);
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		if (vis[i] || arrPos[i].second == i)
			continue;
		int cycleSize = 0;
		int j = i;
		while (!vis[j])
		{
			vis[j] = 1;

			j = arrPos[j].second;
			cycleSize++;
		}

		if (cycleSize > 0)
		{
			ans += (cycleSize - 1);
		}
	}
	return ans;
}


int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << minimumSwaps(arr, n) << endl;
	return 0;
}