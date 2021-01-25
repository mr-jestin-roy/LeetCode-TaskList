#include <bits/stdc++.h>
using namespace std;
#include "Pair.cpp"


int main() {
	// TAKING THREE TYPES IN PAIR TEMPLATE
	Pair<int, Pair<double, char>> p5;
	p5.setX(10);
	Pair<double, char> p4;
	p4.setX(100.34);
	p4.setY('N');

	p5.setY(p4);

	cout << p5.getX() << " " << p5.getY().getX() << " " << p5.getY().getY() << endl;

	/*
	TAKING TWO PARAMETERS IN THE PAIR TEMPLATE
	Pair<int, double> p1;
	p1.setX(100.34);
	p1.setY(100.34);

	cout << p1.getX() << " " << p1.getY() << endl;
	*/
	/*
	Pair<int> p1;
	p1.setX(10);
	p1.setY(20);

	cout << p1.getX() << " " << p1.getY() << endl;

	Pair<double> p2;

	p2.setX(100.34);
	p2.setY(34.21);

	cout << p2.getX() << " " << p2.getY() << endl;
	*/


}