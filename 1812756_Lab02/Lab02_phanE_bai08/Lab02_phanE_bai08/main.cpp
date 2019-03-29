#include <iostream>
#include <conio.h>

using namespace std;

double WindChill(double t, double v);

int main(int argc, const char **argv) {

	double t = 0, v = 0;
	do {
		cout << endl << "Nhap nhiet do (F) >> ";
		cin >> t;
	} while (t < -50 || t > 50);

	do {
		cout << endl << "Nhap van toc gio (dam/gio) >> ";
		cin >> v;
	} while (v < 3 || v > 120);

	cout << endl << "Do lanh cua gio = " << WindChill(t, v);

	_getch();
	return 0;
}

double WindChill(double t, double v) {
	double ketQua = 0;
	ketQua = 35.74 + 0.6215*t + (0.4275*t - 35.75) * (0.16*v);
	return ketQua;
}


