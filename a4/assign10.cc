/*
 * assign10.cc
 *
 *  Created on: 15-Apr-2016
 *      Author: Rohit
 */

#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
using std::showpoint;

#include <iomanip>
using std::setprecision;

#include <string>
using std::string;

//#include "shape.h"
//#include "shape2.h"
#include "shape3.h"

#define N 50
#define LINE string ( N, '=' )

void Print(const string&, Shape*);

int main() {
	cout << "\nRectangle:\n";

	//Square s;
	//Circle c;
	//cout << "Enter length to calculate area of a square: ";
	//cout << "Area of square: " << s.area();
	//cout << "\nEnter radius to calcuate area of a circle:";
	//cout << "Area of circle: " << c.area();

	Rectangle r1(7.5, 2.5);
	Rectangle r2;
	Print("r1", &r1);
	Print("r2", &r2);
	r2 = r1;
	Print("r2", &r2);
	cout << LINE << endl << endl;

    cout << "Circle:\n";
    Circle c1 ( 2.5 ), c2 ( 5 );
    Print ( "c1", &c1 ); Print ( "c2", &c2 );
    c1 += c2; Print ( "c1", &c1 );
    cout << LINE << endl << endl;

    cout << "Triangle:\n";
    Triangle t1 ( 5.1, 12.2, 13.3 ); Print ( "t1", &t1 );
    cout << LINE << endl << endl;

    cout << "Square:\n";
    Square s1 ( 2.5 ); Print ( "s1", &s1 );
    cout << LINE << endl << endl;

    cout << "Right Triangle:\n";
    RightTriangle rt1 ( 5, 12 ); Print ( "rt1", &rt1 );
    cout << LINE << endl << endl;

    cout << "Equilateral Triangle:\n";
    EquTriangle et1 ( 5 ); Print ( "et1", &et1 );
    cout << LINE << endl << endl;

    cout << "Box:\n";
    Box b1 ( 3, 4, 5 ); Print ( "b1", &b1 );
    cout << LINE << endl << endl;

    cout << "Cube:\n";
    Cube cu1 ( 2.5 ); Print ( "cu1", &cu1 );
    cout << LINE << endl << endl;

    cout << "Cylinder:\n";
    Cylinder cy1 ( 2.5, 5 ); Print ( "cy1", &cy1 );
    cout << LINE << endl << endl;

    cout << "Cone:\n";
    Cone co1 ( 2.5, 5 ), co2 ( 3.75, 4.25 ), co3;
    Print ( "co1", &co1 ); Print ( "co2", &co2 );
    Print ( "co3", &co3 ); co1 = co3; Print ( "co1", &co1 );
    co2 += co1; Print ( "co2", &co2 );
    cout << LINE << endl << endl;

    cout << "Sphere:\n";
    Sphere sp1 ( 2.5 ); Print ( "sp1", &sp1 );
    cout << LINE << endl << endl;

    cout << "Tetrahedron:\n";
    Tetrahedron te1 ( 5 ), te2 ( te1 ), te3;
    Print ( "te1", &te1 ); Print ( "te2", &te2 );
    Print ( "te3", &te3 ); te3 += te1 += te2;
    Print ( "te1", &te1 ); Print ( "te3", &te3 );

	return 0;
}

void Print(const string& name, Shape* p) {
	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << name << ": ";
	p->print();
	cout << endl;
	if (p->perimeter())
		cout << "perimeter = " << p->perimeter() << endl;
	cout << "area = " << p->area() << endl;
	if (p->volume())
		cout << "volume = " << p->volume() << endl;
	cout << endl;
}

