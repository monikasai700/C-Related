/*
 * shape2.h
 *
 *  Created on: 15-Apr-2016
 *      Author: Rohit
 */

#include "shape.h"
using namespace std;

class Rectangle: public Shape {
protected:
	double length, width;

public:
	Rectangle();
	Rectangle(const double a,const double b);
	Rectangle(const Rectangle&);
	~Rectangle() {
	}
	void operator =(const Rectangle & d) {
		this->length = d.length;
		this->width = d.width;
	}
	void operator +=(const Rectangle & d) {
		this->length = this->length + d.length;
		this->width = this->width + d.width;
	}
	virtual double perimeter();
	virtual double area();
	virtual void print();
};



class Circle: public Shape {
protected:
	double radius;
public:
	Circle();
	Circle(const double r);
	Circle(const Circle& a);
	~Circle() {
	}
	void operator =(const Circle & d) {
		this->radius = d.radius;
	}
	void operator +=(const Circle & d) {
		this->radius = this->radius + d.radius;
	}

	double perimeter();
	double area();
	void print();
};

//Triangle
class Triangle: public Shape {
protected:
	double l1, l2, l3;

public:
	Triangle();
	Triangle(const double a,const double b, const double c);
	Triangle(const Triangle&);
	~Triangle() {
	}
	void operator =(const Triangle & d) {
		this->l1 = d.l1;
		this->l2 = d.l2;
		this->l3 = d.l3;
	}
	void operator +=(const Triangle & d) {
		this->l1 = this->l1 + d.l1;
		this->l2 = this->l2 + d.l2;
		this->l3 = this->l3 + d.l3;

	}

	double perimeter();
	double area();
	void print();

};

//Square
class Square: public Rectangle {

public:
	Square();
	Square(const double a);
	Square(const Square&);
	~Square() {
	}

	double perimeter();
	double area();
	void print();

};

class RightTriangle: public Triangle {
public:
	RightTriangle();
	RightTriangle(const double a,const double b);
	RightTriangle(const RightTriangle&);
	~RightTriangle() {
	}

	double perimeter();
	double area();
	void print();
};

class EquTriangle: public Triangle {
public:
	EquTriangle();
	EquTriangle(const double a);
	EquTriangle(const EquTriangle&);
	~EquTriangle() {
	}

	double perimeter();
	double area();
	void print();

};

