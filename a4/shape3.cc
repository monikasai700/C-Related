/*
 * shape3.cc
 *
 *  Created on: 15-Apr-2016
 *      Author: Rohit
 */

#include<tgmath.h>
#include<math.h>
#include "shape3.h"

using std::sqrt;
using std::pow;

Cube::Cube() {
	this->length = 0;
	this->width = 0;
	this->height = 0;
}
Cube::Cube(const double a) {
	this->length = a;
	this->width = a;
	this->height = a;
}
Cube::Cube(const Cube& c) {
	this->length = c.length;
	this->width = c.width;
	this->height = c.height;
}
double Cube::perimeter() {
	return 0.0;
}
double Cube::area() {
	double a = Rectangle::area();
	double p = Rectangle::perimeter();
	double ar = (2 * a) + (this->height * p);
	return ar;
}
double Cube::volume() {
	double a = Rectangle::area();
	return this->height * a;
}
void Cube::print() {
	cout << "lenght = " << this->length << " width = " << this->width
			<< " height = " << this->height;
}


Box::Box() {
	this->length = 0;
	this->width = 0;
	this->height = 0;
}
Box::Box(const double a, const double b, const double c) {
	this->length = a;
	this->width = b;
	this->height = c;
}
Box::Box(const Box& c) {
	this->length = c.length;
	this->width = c.width;
	this->height = c.height;
}
double Box::perimeter() {
	return 0.0;
}
double Box::area() {
	double a = Rectangle::area();
	double p = Rectangle::perimeter();
	double ar = (2 * a) + (this->height * p);
	return ar;
}
double Box::volume() {
	double a = Rectangle::area();
	return this->height * a;
}
void Box::print() {
	cout << "lenght = " << this->length << " width = " << this->width
			<< " height = " << this->height;
}

Cylinder::Cylinder() {
	this->height = 0;
	this->radius = 0;
}
Cylinder::Cylinder(double a, double b) {
	this->height = b;
	this->radius = a;
}
Cylinder::Cylinder(const Cylinder& c) {
	this->height = c.height;
	this->radius = c.radius;
}
double Cylinder::perimeter() {
	return 0.0;
}
double Cylinder::area() {
	double a = Circle::area();
	double p = Circle::perimeter();
	double a1 = this->height * p;
	double ao = (2 * a) + a1;
	return ao;
}
double Cylinder::volume() {
	double a = Circle::area();
	return this->height * a;
}
void Cylinder::print() {
	cout << "radius = " << this->radius << " height = " << this->height;
}

//cone
Cone::Cone() {
	this->height = 0;
	this->radius = 0;
}
Cone::Cone(const double a, const double b) {
	this->height = b;
	this->radius = a;
}
Cone::Cone(const Cone& c) {
	this->height = c.height;
	this->radius = c.radius;
}
double Cone::perimeter() {
	return 0.0;
}
double Cone::area() {
	double s = sqrt(pow(this->height, 2.0) + pow(this->radius, 2.0));
	double p = Circle::perimeter();
	double a0 = (s * p) / 2;
	double a = Circle::area();
	return a + a0;
}
double Cone::volume() {
	double a = Circle::area();
	return (this->height * a) / 3;
}
void Cone::print() {
	cout << "radius = " << this->radius << " height = " << this->height;
}

//Sphere
Sphere::Sphere() {

}
Sphere::Sphere(const double a) {
	this->radius = a;
}
Sphere::Sphere(const Sphere& s) {
	this->radius = s.radius;
}
double Sphere::area() {
	double a = Circle::area();
	return 4 * a;
}
double Sphere::volume() {
	double a = Circle::area();
	return (4 * this->radius * a) / 3;
}
//double Sphere::perimeter() {
//	return Circle::perimeter();
//}
//void Sphere::print() {
//	cout << "radius = " << this->radius;
//}

//Tetrahedron
Tetrahedron::Tetrahedron() {
	this->l1 = 0;
	this->l2 = 0;
	this->l3 = 0;
}
Tetrahedron::Tetrahedron(double a) {
	this->l1 = a;
	this->l2 = a;
	this->l3 = a;
}
Tetrahedron::Tetrahedron(const Tetrahedron& c) {
	this->l1 = c.l1;
	this->l2 = c.l2;
	this->l3 = c.l3;
}
double Tetrahedron::perimeter() {
	return 0.0;
}
double Tetrahedron::area() {
	double a = EquTriangle::area();
	return 4 * a;
}

double Tetrahedron::volume() {
	double x = pow(this->l1, 3) / (6 * (sqrt(2)));
	return x;

}
//void Tetrahedron::print() {
//	cout << "length = " << this->l1;
//}
