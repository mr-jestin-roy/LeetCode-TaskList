#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int year;
	cin >> year;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		cout << "TRUE";
	else
		cout << "FALSE";
	return 0;
}
