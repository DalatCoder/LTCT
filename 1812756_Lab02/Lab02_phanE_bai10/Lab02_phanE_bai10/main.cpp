#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double TinhDoCao(double phi, double delta, double h);
double TinhPhuongVi(double phi, double delta, double h, double altitude);

int main(int argc, const char **argv) {

	double phi = 0, delta = 0, h = 0;
	cout << endl << "Nhap vao cac gia tri tuong ung: ";
	cout << endl << "Phi = "; cin >> phi;
	cout << endl << "Delta = "; cin >> delta;
	cout << endl << "Chieu cao = "; cin >> h;

	cout << endl << "Vi tri cua ngoi sao: "
		<< endl << "	- Do cao = " << TinhDoCao(phi, delta, h)
		<< endl << "	- Phuong vi = " << TinhPhuongVi(phi, delta, h, TinhDoCao(phi, delta, h));

	_getch();
	return 0;
}

double TinhDoCao(double phi, double delta, double h) {
	double altitude = 0;
	double temp1 = sin(phi) * sin(delta);
	double temp2 = cos(phi) * cos(delta) * cos(h);

	altitude = asin(temp1 + temp2);
	return altitude;
}

double TinhPhuongVi(double phi, double delta, double h, double altitude) {
	double azimuth = 0;
	double temp1 = cos(phi) * sin(delta);
	double temp2 = sin(phi) * cos(delta) * cos(h);
	double temp3 = cos(altitude);

	azimuth = acos((temp1 - temp2) / temp3);
	return azimuth;
}

