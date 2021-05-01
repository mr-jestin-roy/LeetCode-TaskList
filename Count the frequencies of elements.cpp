#include <bits/stdc++.h>
using namespace std;
// THIS ONE IS O(N^2) APPROACH
// void countFreq(int arr[], int n)
// {
// 	vector<bool> visited(n, false);
// 	for (int i = 0; i < n; i++) {
// 		if (visited[i] == true)
// 			continue;
// 		int count = 1;
// 		for (int j = i + 1; j < n; j ++) {
// 			if (arr[i] == arr[j])
// 			{
// 				visited[j] = true;
// 				count++;
// 			}
// 		}
// 		cout << arr[i] << " => " << count << endl;
// 	}
// }


// An efficient solution is to use hashing.
// YIELDING A O(N)APPROACH
void countFreq(int arr[], int n) {
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	for (int j = 0; j < n; j++) {
		if (mp[arr[j]] != -1)
		{
			cout << arr[j] << " " << mp[arr[j]] << endl;
			mp[arr[j]] = -1;
		}
	}
}


int main() {
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	countFreq(arr, n);
	return 0;
}