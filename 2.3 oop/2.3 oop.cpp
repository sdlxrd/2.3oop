#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	Money a, b, c, d;
	double x;

	cout << "First sum: "; cin >> a;
	cout << "Second sum: "; cin >> b;
	cout << endl << "first  sum = " << a << "second sum = " << b << endl;
	cout << "first - second: " << a - b;
	cout << "x = "; cin >> x;

	cout << endl;
	cout << "first  * x: "<< a * x;
	cout << "second * x: "<< b * x << endl;


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