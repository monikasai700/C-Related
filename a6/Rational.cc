#include "Rational.h"
#include<iostream>
#include<string>
#include<vector>
#include <stdlib.h>
#include <array>
#include<sstream>
#include<cstdlib>

using std::cout;
using std::cerr;
using std::endl;
using std::cin;
using std::string;

using std::vector;
//using namespace std;

const long int numerator = 0;
const long int denominator = 1;
static Rational temp;

Rational::Rational() {
	this->num = numerator;
	this->denum = denominator;

}

Rational::Rational(const Rational &obj) {
	this->num = obj.num;
	this->denum = obj.denum;
}

Rational::Rational(const long int n) {

	this->num = n;
	this->denum = denominator;

	check();
	simplify();
}

Rational::Rational(const long int n, const long int d) {
	if (d != 0) {
		this->num = n;
		this->denum = d;
	} else {
		cout << "Error: division by zero";
	}
	check();
	simplify();
}

void Rational::check() {
	if (denum < 0 && num < 0) {
		denum = abs(denum);
		num = abs(num);

	} else if (denum < 0 || num < 0) {
		denum = abs(denum);
		num = abs(num);

		num *= -1;
	}

	//cout<<"check- denum:  "<<denum<<" num: "<<num<<endl;
}
void Rational::simplify() {
	long int g = gcd(num, denum);

	//cout<<"gcd is "<<g<<endl;
	num = num / g;
	denum = denum / g;

	//cout<<"simplify- denum:  "<<denum<<" num: "<<num<<endl;
	check();
}
long int Rational::gcd(long int n, long int m) {
	long int gcd, remainder;

	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	gcd = m;

	return gcd;

}

ostream& operator<<(ostream& os, const Rational & d) {
	if (d.num == 0) {
		os << d.num;
	} else if(d.denum==1){
		os << d.num;
	}else {
		os << d.num << "/" << d.denum;
	}
	return os;
}

bool isNumber(string s) {

	char* p;
	strtol(s.c_str(), &p, 10);

	return *p == 0;
}

bool getNumber(string s) {

	char* p;

	return strtol(s.c_str(), &p, 10);
}
istream& operator>>(istream& is, Rational& d) {

	string sinp;
	//long int nums[2];
	//long int cnt;
	//char ch;
	//cnt = 0;
	getline(cin, sinp, '\n');
	std::stringstream ss(sinp);
	string s;
	vector<string> elem;
	while (getline(ss, s, ' ')) {

		elem.push_back(s);

	}
	//cout<<"count "<<elem.size();
	if (elem.size() == 1) {
		string b1 = (string) elem[0];
		long int a = std::atol(b1.c_str());
		Rational d1(a);
		d1.simplify();
		//cout<<"denum: "<<d1.denum<<" num: "<<d1.num<<endl;
		d.denum = d1.denum;
		d.num = d1.num;
	} else if (elem.size() == 2) {
		cout << "Error: line \"" << sinp << "\" contains invalid number"
				<< endl;
	} else if (elem.size() == 3) {
		string b1 = (string) elem[0];
		long int a = std::atol(b1.c_str());

		char c = (char) elem[1][0];

		string b2 = (string) elem[2];
		long int b = std::atol(b2.c_str());

		//cout<<a<<" "<<c<<" "<<b;
		//d(a,b);
		if (c == '/') {
			//cout << "valid" << endl;
			Rational d1(a, b);
			d1.simplify();
			//cout<<"denum: "<<d1.denum<<" num: "<<d1.num<<endl;
			d.denum = d1.denum;
			d.num = d1.num;

		} else {
			cout << "Error: line \"" << sinp << "\" contains invalid number"
					<< endl;
		}

	} else {
		cout << "Error: line \"" << sinp << "\" contains invalid number"
				<< endl;
	}

	return is;
}

Rational & Rational::operator +(const Rational & d) {
	Rational r;
	//cout << "in" << endl;
	long int a = 0;

	a = this->denum * d.denum;
	r.denum = a;

	a = 0;
	a = (this->num * d.denum) + (d.num * this->denum);
	r.num = a;

	r.check();
	temp = r;
	return temp;
}

Rational & Rational::operator -(const Rational & d) {
	Rational r;
	//cout << "in" << endl;
	long int a = 0;

	a = this->denum * d.denum;
	r.denum = a;

	a = 0;
	a = (this->num * d.denum) - (d.num * this->denum);
	r.num = a;

	r.check();
	temp = r;
	return temp;
}

Rational & Rational::operator *(const Rational & d) {
	Rational r;
	long int a = 0;
	a = this->denum * d.denum;
	r.denum = a;

	a = 0;
	a = this->num * d.num;
	r.num = a;

	r.check();
	temp = r;
	return temp;
}

Rational & Rational::operator /(const Rational & d) {
	Rational r;
	long int a = 0;

	a = this->denum * d.num;
	r.denum = a;

	a = 0;
	a = this->num * d.denum;
	r.num = a;

	r.check();
	temp = r;
	return temp;
}

bool Rational::operator ==(const Rational & d) {
	Rational r;

	if ((this->num == d.num) && (this->denum == d.denum))
		return true;
	else
		return false;
}

bool Rational::operator !=(const Rational & d) {
	Rational r;

	if ((this->num == d.num) && (this->denum == d.denum))
		return false;
	else
		return true;
}

bool Rational::operator <(const Rational & d) {
	Rational r;
	float a = 0, b = 0;

	a = (float) this->num / this->denum;
	b = (float) d.num / d.denum;

	if (a < b)
		return true;
	else
		return false;
}

bool Rational::operator <=(const Rational & d) {
	Rational r;
	float a = 0, b = 0;

	a = (float) this->num / this->denum;
	b = (float) d.num / d.denum;

	if (a <= b)
		return true;
	else
		return false;
}

bool Rational::operator >(const Rational & d) {
	Rational r;
	float a = 0, b = 0;

	a = (float) this->num / this->denum;
	b = (float) d.num / d.denum;

	if (a > b)
		return true;
	else
		return false;
}

bool Rational::operator >=(const Rational & d) {
	Rational r;
	float a = 0, b = 0;

	a = (float) this->num / this->denum;
	b = (float) d.num / d.denum;

	if (a >= b)
		return true;
	else
		return false;
}

Rational & Rational::operator /=(const Rational & d) {
	Rational r;
	Rational a(*this);

	r = a / d;

	r.check();

	this->denum = r.denum;
	this->num = r.num;

	simplify();
	temp = r;
	return temp;
}

Rational & Rational::operator +=(const Rational & d) {
	Rational r;
	Rational a(*this);

	r = a + d;

	r.check();

	this->denum = r.denum;
	this->num = r.num;

	r.simplify();

	temp = r;
	return temp;
}

Rational & Rational::operator -=(const Rational & d) {
	Rational r;
	Rational a(*this);

	r = a - d;

	r.check();

	this->denum = r.denum;
	this->num = r.num;

	simplify();

	temp = r;
	return temp;
}

Rational & Rational::operator *=(const Rational & d) {
	Rational r;
	Rational a(*this);

	r = a * d;

	r.check();

	this->denum = r.denum;
	this->num = r.num;

	simplify();
	temp = r;
	return temp;
}

Rational & Rational::operator ++() {
	long int r = 0;
	r = this->num + this->denum;

	this->num = r;

	check();

	return *this;
}

Rational & Rational::operator --() {
	long int r = 0;
	r = this->num - this->denum;

	this->num = r;

	check();

	return *this;
}

Rational & Rational::operator ++(int) {
	Rational r1(*this);
//cout<<"++"<<endl;
	long int r = 0;
	r = this->num + this->denum;

	this->num = r;

	r1.check();

	temp.denum = r1.denum;
	temp.num = r1.num;

	return temp;
}

Rational & Rational::operator --(int) {

	Rational r1(*this);

	long int r = 0;
	r = this->num - this->denum;

	this->num = r;

	r1.check();

	temp.denum = r1.denum;
	temp.num = r1.num;

	return temp;
}
