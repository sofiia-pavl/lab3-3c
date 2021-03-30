#include "Fraction.h"


Fraction operator -(const Fraction& f1, const Fraction& f2) {
	double x = f1.i + 0.001 * f1.f;
	double y = f2.i + 0.001 * f2.f;
	Fraction result = Fraction(x - y);

	return result;
}

Fraction::Fraction()
	: i(0),f (0)
{}

Fraction::Fraction(long int i, unsigned short f) 
{
	SetI(i);
	SetF(f);
}

Fraction::Fraction(const Fraction& F) 
{
	*this = F;
}

Fraction::Fraction(double x) {
	int sign = int(x / abs(x));
	x = abs(x);
	i = (int)x;
	x = x - i;
	x *= 1000;
	f = (int)x;
	i = sign * i;
}

Fraction::operator string()const
{
	stringstream ss;
	ss << "First part of number = " << i << endl;
	ss << "Second part of number = " << f << endl;

	return ss.str();
}

Fraction& Fraction::operator++()
{
	i++;
	return *this;
}

Fraction& Fraction::operator--()
{
	i--;
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction t(*this);
	i++;
	return t;
}

Fraction Fraction::operator--(int)
{
	Fraction t(*this);
	i--;
	return t;
}

ostream& operator << (ostream& out, const Fraction& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, Fraction& r)
{
	cout << "First part of number= "; in >> r.i;
	cout << "Second part of number= "; in >> r.f;
	cout << endl;
	return in;
}