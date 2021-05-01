#include <bits/stdc++.h>

using namespace std;

int justCompareboth(string A, string B)
{
	string AB = A.append(B);
	string BA = B.append(A);
	return AB.compare(BA) > 0 ? 1 : 0;
}

void printLargest(vector<string> arr)
{
	sort(arr.begin(), arr.end(), justCompareboth);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i];
}
int main()
{
	vector<string> arr;

	// output should be 6054854654
	arr.push_back("54");
	arr.push_back("546");
	arr.push_back("548");
	arr.push_back("60");
	printLargest(arr);

	return 0;
}