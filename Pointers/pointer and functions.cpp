#include <iostream>
using namespace std;

void print(int* p)
{
	cout << *p << endl;
}

void incrementPointer(int* p)
{
	p = p + 1;
}
void increment(int* p)
{
	(*p)++;
}

int main()
{
	int i = 10;
	int *p = &i;
	print(p);

	cout << p << endl;
	incrementPointer(p); //because of pass by value, this function will not change
	cout << p << endl; //value of p

	cout << *p << endl;
	increment(p); // value pointed by p changed by the function increment.
	cout << *p << endl;
}