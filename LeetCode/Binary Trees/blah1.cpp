#include <iostream>
using namespace std;

int main() {
	constexpr unsigned int id = 100;
	unsigned char array[] = {id , id % 5};
	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << static_cast<unsigned int>(array[0]) << endl;
	cout << static_cast<unsigned int>(array[1]);
}