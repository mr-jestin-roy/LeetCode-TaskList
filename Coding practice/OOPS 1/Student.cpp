class Student {

public :

	int rollNumber;

private :

	int age;


public :
	// Default constructor
	Student() {
		cout << "Constructor called" << endl;
	}
	//Parameterized constricor
	Student(int rollNumber) {
		cout << "Constructor 2 called!" << endl;
		this->rollNumber = rollNumber;
		cout << this << endl;
	}

	Student(int a, int r) {
		cout << "Constructor 3 called!" << endl;
		this -> age = a;
		this -> rollNumber = r;
	}

	void display() {
		cout << age << " " << rollNumber << endl;
	}

	int getAge() {
		return age;
	}

	void setAge(int a, int password) {
		if (password != 123) {
			return;
		}
		if (a < 0) {
			return;
		}
		age = a;
	}

};


