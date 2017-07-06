#include "shape2.h"

using namespace std;

class Cube: public Square {
private:
	double height;

public:
	Cube();
	Cube(const double);
	Cube(const Cube&);
	~Cube() {
	}

	double perimeter();
	double area();
	double volume();
	void print();
};

class Box: public Rectangle {
private:
	double height;

public:
	Box();
	Box(const double ,const double,const double);
	Box(const Box&);
	~Box() {
	}

	double perimeter();
	double area();
	double volume();
	void print();
};


class Cylinder: public Circle {
private:
	double height;

public:
	Cylinder();
	Cylinder(const Cylinder&);
	Cylinder(const double ,const double);
	~Cylinder() {
	}

	double perimeter();
	double area();
	double volume();
	void print();
};

class Cone: public Circle {
private:
	double height;

public:
	Cone();
	Cone(const double,const double);
	Cone(const Cone&);
	~Cone() {
	}

	double perimeter();
	double area();
	double volume();
	void print();
};

class Sphere: public Circle {
public:
	Sphere();
	Sphere(const double);
	Sphere(const Sphere&);
	~Sphere() {
	}

	double area();
	double volume();
	//void print();
	//double perimeter();
};

class Tetrahedron: public EquTriangle {

public:
	Tetrahedron();
	Tetrahedron(const double );
	Tetrahedron(const Tetrahedron&);
	~Tetrahedron() {
	}

	Tetrahedron operator +=(const Tetrahedron & d) {
			this->l1 = this->l1 + d.l1;
			this->l2 = this->l2 + d.l2;
			this->l3 = this->l3 + d.l3;
			return *this;
		}
	double perimeter();
	double area();
	double volume();
	//void print();
};

