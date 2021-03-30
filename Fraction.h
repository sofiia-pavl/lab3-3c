#pragma once
#include "Object.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Fraction : public Object
{
private:
	long int i;
	unsigned short f;
public:
	long int GetI() const { return i; };
	unsigned short GetF() const { return f; };
	void SetI(long int value) { i = value; }
	void SetF(unsigned short value) { f = value; }

	Fraction();
	Fraction(long int, unsigned short);
	Fraction(const Fraction&);
	Fraction(double x);
	~Fraction() {}

	operator string() const;

	Fraction& operator ++();
	Fraction& operator --();
	Fraction operator ++(int);
	Fraction operator --(int);

	friend ostream& operator <<(ostream&, const Fraction&);
	friend istream& operator >>(istream&, Fraction&);

	void operator () (Fraction& a, Fraction& d)
	{
		if (a.GetI() == d.GetI() && a.GetF() == d.GetF()) cout << a.GetI() << "." << a.GetF() << " = " << d.GetI() << "." << d.GetF();
		else if (a.GetI() < d.GetI() || a.GetI() == d.GetI() && a.GetF() < d.GetF())   cout << a.GetI() << "." << a.GetF() << " < " << d.GetI() << "." << d.GetF();
		else if (a.GetI() > d.GetI() || a.GetI() == d.GetI() && a.GetF() > d.GetF())   cout << a.GetI() << "." << a.GetF() << " > " << d.GetI() << "." << d.GetF();
	}

	friend Fraction operator -(const Fraction&, const Fraction&);
};
