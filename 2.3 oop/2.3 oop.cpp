#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	Money a, b, c, d;
	double x;

	cout << "first sum: "; cin >> a;
	cout << "second sum: "; cin >> b;

	cout << "a - b: " << a - b;
	cout << "x = "; cin >> x;

	cout << endl;
	cout << "a * x: "<< a * x;
	cout << "b * x: "<<b * x << endl;


	if (a == b)
	{
		cout << a.getGrn() << ", " << a.getKop() << " == " << b.getGrn() << ", " << b.getKop();
	}
	cout << "a++: " << a++;
	cout << "res: " << a;
	cout << endl;
	cout << "++a: " << ++a;
	cout << endl;
	cout << "a--: " << a--;
	cout << "res: " << a;
	cout << endl; 
	cout << "--a: " << --a;

	cout << endl << endl;
	if(a == b)
	{
		cout << a.getGrn() << "," << a.getKop() << " == "
			<< b.getGrn() << "," << b.getKop() << endl << endl;
	}
	if (a > b)
	{
		cout << a.getGrn() << "," << a.getKop() << " > "
			<< b.getGrn() << "," << b.getKop() << endl << endl;
	}
	if (a < b)
	{
		cout << a.getGrn() << "," << a.getKop() << " < "
			<< b.getGrn() << "," << b.getKop() << endl << endl;
	}

}