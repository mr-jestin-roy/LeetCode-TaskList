#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int size = sizeof(arr) / sizeof(*arr);
	// The longest common prefix of an empty array is "".
	if (size == 0) {
		cout << "Longest common prefix:" << "" << endl;
	}
	// The longest common prefix of an array containing
	// only one element is that element itself.
	else if (size == 1) {
		cout << "Longest common prefix:" << arr[0] << endl;
	}
	else {
		// Sort the array
		sort(arr, arr + size);
		int length = arr[0].size();
		string result = "";
		// Compare the first and the last string character
		// by character.
		for (int i = 0; i < length; i++) {
			// If the characters match, append the character to the result.
			if (arr[0][i] == arr[size - 1][i]) {
				result += arr[0][i];
			}
			// Else stop the comparison.
			else {
				break;
			}
		}
		cout << "Longest common prefix: " << result << endl;
	}
	return 0;
}