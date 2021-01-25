#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr,
          int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
// Return the minimum number
// of swaps required to sort
// the array
int minSwaps(vector<int>arr,
             int N)
{
	int ans = 0;
	vector<int>temp = arr;

	// Hashmap which stores the
	// indexes of the input array
	map <int, int> h;

	sort(temp.begin(), temp.end());
	for (int i = 0; i < N; i++)
	{
		h[arr[i]] = i;
	}
	for (int i = 0; i < N; i++)
	{
		// This is checking whether
		// the current element is
		// at the right place or not
		if (arr[i] != temp[i])
		{
			ans++;
			int init = arr[i];

			// If not, swap this element
			// with the index of the
			// element which should come here
			swap(arr, i, h[temp[i]]);

			// Update the indexes in
			// the hashmap accordingly
			h[init] = h[temp[i]];
			h[temp[i]] = i;
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
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << minSwaps(arr, n) << endl;
	return 0;
}