/*
 * shape.h
 *
 *  Created on: 15-Apr-2016
 *      Author: Rohit
 */
#include <iostream>
using namespace std;
#ifndef H_SHAPE
#define H_SHAPE

class Shape /* Abstract class */
{

public:

	virtual double area() = 0; /* Pure virtual function */
	virtual double perimeter() = 0;
	virtual void print()  = 0;

	virtual double volume()  {
		return 0;
	}
	virtual ~Shape() {
	}
};

#endif

