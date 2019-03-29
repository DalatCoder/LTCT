#include <iostream>
#include <conio.h>

using namespace std;

double TimMax(double x, double y);
double TimMax4(double a, double b, double c, double d);

int main(int argc, const char **argv) {

	double a = 0, b = 0, c = 0, d = 0;

	cout << endl << "Nhap vao 4 gia tri: ";
	cout << endl << "a = "; cin >> a;
	cout << endl << "b = "; cin >> b;
	cout << endl << "c = "; cin >> c;
	cout << endl << "d = "; cin >> d;

	cout << endl << "So lon nhat trong 4 so la: "
		<< TimMax4(a, b, c, d);

	_getch();
	return 0;
}

double TimMax(double x, double y) {
	return x > y ? x : y;
}

double TimMax4(double a, double b, double c, double d) {
	return TimMax(TimMax(a, b), TimMax(c, d));
}

