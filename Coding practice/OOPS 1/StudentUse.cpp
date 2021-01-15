#include <iostream>
using namespace std;
#include "Student.cpp"


int main() {
	Student s1;
	s1.display();

	Student s2(11);
	cout << "Address of s2: " << &s2 << endl;
	s2.display();
	Student *s3  = new Student;
	s3 -> display();

	cout << "Parameterized Constructor Demo" << endl;
	Student s4(10);

	s4.display();

	Student *s5 = new Student(101);
	s5->display();

	Student s6(20, 1002);
	s6.display();


}

