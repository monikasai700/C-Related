/*
 * Rational.h
 *
 *  Created on: 28-Mar-2016
 *      Author: Rohit
 */

//Name:Tadaka Sai Mounika
//Csci689/Section1
//TA Name:Anthony Schroeder
//Assignment number 1
//Due Rational:03/07/2016
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include<vector>
using std::to_string;
using std::cout;
using std::cerr;
using std::endl;
using std::cin;
using std::string;
using std::istream;
using std::ostream;
using std::vector;
using std::ostream;
const extern string mmm;
const extern int dd;
const extern int yyyy;

#ifndef Rational_H //header guards
#define Rational_H
#endif
class Rational {

	int num;
	int denum;

public:
	Rational();
	Rational(const Rational &r);
	Rational(const long int n, const long int d);
	Rational(const long int n);

	void check();
	long int gcd(long int a,long int b);
	void simplify();
	friend ostream& operator<< (ostream& os, const Rational& d);
	friend istream &operator>> (istream& is, Rational& d);
	friend bool isNumber(string s);
	friend bool getNumber(string s);
	Rational & operator +(const Rational & d);
	Rational & operator -(const Rational & d);
	Rational & operator *(const Rational & d);
	Rational & operator /(const Rational & d);

	bool operator ==(const Rational & d);
	bool operator !=(const Rational & d);
	bool operator <(const Rational & d);
	bool operator <=(const Rational & d);
	bool operator >(const Rational & d);
	bool operator >=(const Rational & d);

	Rational & operator +=(const Rational & d);
	Rational & operator -=(const Rational & d);
	Rational & operator *=(const Rational & d);
	Rational & operator /=(const Rational & d);

	Rational & operator ++(int);
	Rational & operator --(int);

	Rational & operator ++();
	Rational & operator --();

};
