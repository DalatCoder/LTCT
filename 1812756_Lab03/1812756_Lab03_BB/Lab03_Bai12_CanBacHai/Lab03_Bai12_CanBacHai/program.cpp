#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

double SquareRoot(double a);

int main()
{

	double a;
	cout << "\nNhap vao 1 so thuc bat ki : ";
	cin >> a;

	cout << "\nCan bac hai cua " << a << " la: " << SquareRoot(a);

	_getch();
	return 0;
}

double SquareRoot(double a)
{
	double xn = 1, x0;
	double limit = pow(10, - 15);

	do
	{
		x0 = xn;
		xn = (a / x0 + x0) / 2;
	} while (abs(xn - x0) > limit);
	
	return xn;
}
