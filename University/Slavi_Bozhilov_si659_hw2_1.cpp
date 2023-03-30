#include <iostream>
using namespace std;
int main()
{
	double x = 5.6;
	double y = 4.2;
	double* p1 = &x;
	cout << p1 << " " << *p1 << endl;
	*p1 = 7.1;
	cout << p1 << " " << *p1 << endl;
	p1 = &y;
	cout << p1 << " " << *p1 << endl;
	double* const p2 = &x;
	cout << p2 << " " << *p2 << endl;

	//1.4 e vuzmojno
	*p2 = 2.4;
	cout << p2 << " " << *p2 << endl;

	//1.5 ne e vuzmojno
	//p2 = &y;

	const double* p3 = &x;
	cout << p3 << " " << *p3 << endl;

	//1.4 ne e vuzmojno
	//*p3 = 4.66;

	//1.5 e vuzmojno
	p3 = &y;
	cout << p3 << " " << *p3 << endl;

	const double* const p4 = new double{ 13.1 };
	cout << p4 << " " << *p4 << endl;
}


