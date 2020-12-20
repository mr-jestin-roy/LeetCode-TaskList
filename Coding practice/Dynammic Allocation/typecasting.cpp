#include <iostream>

using namespace std;

int main()
{
	int i = 65;					//IMPLICIT TYPECASTING
	char c = i;
	cout << c << endl;

	int * p = &i;				// EXPLCIT TYPECASTING
	char * pc = (char*) p;

	cout << p << endl;			// prints the address it's pointing to
	cout << pc << endl;		//prints all the contents till it reaches \0.
	cout << *p << endl;
	cout << *pc << endl;
	cout << *(pc + 1) << endl;
	cout << *(pc + 2) << endl;
	cout << *(pc + 3) << endl;
	return 0;
}