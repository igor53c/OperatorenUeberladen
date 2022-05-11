// OperatorenUeberladen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Punkt.h"

using namespace std;

int main()
{
	locale::global(locale("German_germany"));

	Punkt p1 = Punkt(3.5, 7.8);
	Punkt p2 = Punkt(3.5, 7.8);

	cout << "p1.getX(): " << p1.getX() << endl;
	cout << "p1.getY(): " << p1.getY() << endl;
	cout << "p2.getX(): " << p2.getX() << endl;
	cout << "p2.getY(): " << p2.getY() << endl;

	cout.setf(ios::boolalpha);

	bool bo = p1 == p2;

	cout << "p1 == p2: " << bo << endl;

	bo = p1 != p2;

	cout << "p1 != p2: " << bo << endl;

	p2 = Punkt(6.4, 1.9);

	cout << "p1.getX(): " << p1.getX() << endl;
	cout << "p1.getY(): " << p1.getY() << endl;
	cout << "p2.getX(): " << p2.getX() << endl;
	cout << "p2.getY(): " << p2.getY() << endl;

	Punkt p12 = p1 + p2;

	cout << "p1.getX(): " << p1.getX() << endl;
	cout << "p1.getY(): " << p1.getY() << endl;
	cout << "p2.getX(): " << p2.getX() << endl;
	cout << "p2.getY(): " << p2.getY() << endl;
	cout << "p12.getX(): " << p12.getX() << endl;
	cout << "p12.getY(): " << p12.getY() << endl;

	p1 * 0.5;

	cout << "p1.getX(): " << p1.getX() << endl;
	cout << "p1.getY(): " << p1.getY() << endl;

	p12 = p1 * 0.5;

	cout << "p12.getX(): " << p12.getX() << endl;
	cout << "p12.getY(): " << p12.getY() << endl;
	cout << "p1.getX(): " << p1.getX() << endl;
	cout << "p1.getY(): " << p1.getY() << endl;

	cout << "&p1: " << &p1 << endl;
	cout << "&p12: " << &p12 << endl;

	p12 = -p1;

	cout << "p1.getX(): " << p1.getX() << endl;
	cout << "p1.getY(): " << p1.getY() << endl;
	cout << "p12.getX(): " << p12.getX() << endl;
	cout << "p12.getY(): " << p12.getY() << endl;

	p1 = -p1;

	cout << "p1.getX(): " << p1.getX() << endl;
	cout << "p1.getY(): " << p1.getY() << endl;

	return EXIT_SUCCESS;
}
