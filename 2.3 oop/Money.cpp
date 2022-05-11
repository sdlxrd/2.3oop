#include "Money.h"
#include <iostream>
#include <sstream>

using namespace std;

Money::Money()
{
	grn = 0;
	kop = 0;
}
Money::Money(long grn = 0, unsigned int kop = 0)
{
	this->grn = grn;
	this->kop = kop;
}
Money::Money(const Money& f)
{
	this->grn = f.grn;
	this->kop = f.kop;
}
Money::~Money()
{}

Money& Money::operator = (const Money& f)
{
	grn = f.grn;
	kop = f.kop;

	return *this;
}
Money::operator string () const
{
	stringstream s;
	s << grn << ", " << kop << endl;
	return s.str();
}

Money operator -(const Money& f, const Money& s)
{
	Money t(0, 0);
	if ((f.grn * 10) + f.kop < (s.grn * 10) + s.kop)
	{
		t.grn = 0;
		t.kop = 0;
		return t;
	}
	if (f.kop < s.kop)
	{
		t.grn = (f.grn - 1) - s.grn;
		t.kop = ((f.kop + 10) - s.kop);
	}
	else
	{
		t.grn = (f.grn - s.grn);
		t.kop = (f.kop - s.kop);
	}
	return t;
}
Money operator *(const Money& l, const double& r)
{
	Money t(0, 0);

	if (r == 10)
	{
		t.grn = l.grn * 10 + l.kop;
		t.kop = 0;
	}	
	else
	{
		t.grn = l.grn * r;
		t.kop = l.kop * r;
	}
	if (t.kop >= 10 && t.kop < 20)
	{
		t.grn += 1;
		t.kop -= 10;
	}
	if (t.kop >= 20 && t.kop < 30)
	{
		t.grn += 2;
		t.kop -= 20;
	}
	if (t.kop >= 30 && t.kop < 40)
	{
		t.grn += 3;
		t.kop -= 30;
	}
	if (t.kop >= 40 && t.kop < 50)
	{
		t.grn += 4;
		t.kop -= 40;
	}
	if (t.kop >= 50 && t.kop < 60)
	{
		t.grn += 5;
		t.kop -= 50;
	}
	if (t.kop >= 60 && t.kop < 70)
	{
		t.grn += 6;
		t.kop -= 60;
	}
	if (t.kop >= 70 && t.kop < 80)
	{
		t.grn += 7;
		t.kop -= 70;
	}
	if (t.kop >= 80 && t.kop < 90)
	{
		t.grn += 8;
		t.kop -= 80;
	}
	return t;
}
bool Money::operator ==(const Money& x)
{
	return this->grn == x.grn && this->kop == x.kop;
}
bool Money::operator >(const Money& x)
{
	if (this->grn > x.grn)
	{
		return true;
	}
	if (this->grn == x.grn)
	{
		if (this->kop > x.kop)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (this->grn < x.grn)
	{
		return false;
	}
}
bool Money::operator <(const Money& x)
{
	if (this->grn < x.grn)
	{
		return true;
	}
	if (this->grn == x.grn)
	{
		if (this->kop < x.kop)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (this->grn > x.grn)
	{
		return false;
	}
}

ostream& operator << (ostream& out, const Money& x)
{
	out << string(x);
	return out;
}
istream& operator >> (istream& in, Money& x)
{
	cout << endl;
	cout << "Grn = "; in >> x.grn;
	cout << "Kop = "; in >> x.kop;
	cout << endl;
	return in;
}
Money Money::operator ++()
{
	grn++;
	kop++;
	return *this;
}

Money Money::operator --()
{
	grn--;
	kop--;
	return *this;
}

Money Money::operator ++(int)
{
	Money t(*this);
	grn++;
	kop++;
	return t;
}

Money Money::operator --(int)
{
	Money t(*this);
	grn--;
	kop--;
	return t;
}