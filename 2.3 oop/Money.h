#pragma once
#include <iostream>
#include <string>

using namespace std;

class Money
{
private:
	long grn;
	unsigned int kop;
public:
	Money();
	Money(long, unsigned int);
	Money(const Money&);
	~Money();

	void setGrn(long grn) { this->grn = grn; }
	void setKop(unsigned int kop) { this->kop = kop; }
	long getGrn() const { return grn; }
	unsigned int getKop() const { return kop; }

	Money& operator = (const Money&);
	operator string() const;

	friend Money operator -(const Money&, const Money&);
	friend Money operator *(const Money&, const double&);

	bool operator ==(const Money&);
	bool operator >(const Money&);
	bool operator <(const Money&);

	friend ostream& operator << (ostream&, const Money&);
	friend istream& operator >> (istream&, Money&);

	Money operator ++();
	Money operator --();
	Money operator ++(int);
	Money operator --(int);
};