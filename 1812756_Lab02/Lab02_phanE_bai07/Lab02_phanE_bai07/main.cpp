// Chương trình tính khoảng cách

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

double TinhKhoangCach(int xA, int yA, int xB, int yB);

int main(int argc, const char **argv) {

	int xA = 0, yA = 0, xB = 0, yB = 0;
	cout << endl << "Nhap vao toa do diem A: ";
	cout << endl << "x = "; cin >> xA;
	cout << endl << "y = "; cin >> yA;

	cout << endl << "Nhap vao toa do diem B: ";
	cout << endl << "x = "; cin >> xB;
	cout << endl << "y = "; cin >> yB;

	double khoangCach = TinhKhoangCach(xA, yA, xB, yB);
	cout << endl << "Khoang cach giua 2 toa do: "
		<< endl << "	- A(" << xA << ", " << yA << ")"
		<< endl << "	- B(" << xB << ", " << yB << ")"
		<< endl << "la: " << khoangCach;

	_getch();
	return 0;
}

double TinhKhoangCach(int xA, int yA, int xB, int yB) {
	double ketQua = 0;
	int temp1 = xB - xA;
	int temp2 = yB - yA;

	ketQua = sqrt(pow(temp1, 2) + pow(temp2, 2));
	return ketQua;
}

