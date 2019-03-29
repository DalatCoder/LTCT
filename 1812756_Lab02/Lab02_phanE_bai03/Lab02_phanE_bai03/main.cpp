// Chương trình tính chu vi và diện tích hình thang
// Input
//		độ dài đáy lớn
//		độ dài đáy bé
//		chiều cao
// Output
//		Chu vi và diện tích hình thang

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

double TinhCanhBen(int dayLon, int dayBe, int chieuCao);
double TinhChuVi(int dayLon, int dayBe, double canhBen);
double TinhDienTich(int dayLon, int dayBe, int chieuCao);

int main() {
	int a = 0, b = 0, h = 0;
	double canhBen = 0, chuVi = 0, dienTich = 0;

	cout << endl << "Nhap cac thong so cua hinh thang can: ";
	cout << endl << "Day lon = "; cin >> a;
	cout << endl << "Day be = "; cin >> b;
	cout << endl << "Chieu cao = "; cin >> h;

	canhBen = TinhCanhBen(a, b, h);
	chuVi = TinhChuVi(a, b, canhBen);
	dienTich = TinhDienTich(a, b, h);

	cout << endl << "Hinh thang co: "
		<< endl << "	- Day lon   = " << a
		<< endl << "	- Day be    = " << b
		<< endl << "	- Chieu cao = " << h
		<< endl << "co: "
		<< endl << "	- Dien tich = " << dienTich
		<< endl << "	- Chu vi    = " << chuVi;

	_getch();
	return 0;
}

double TinhCanhBen(int dayLon, int dayBe, int chieuCao) {
	double canhBen = 0;
	double temp = (dayLon - dayBe) / 2.0;
	canhBen = sqrt(pow(temp, 2) + pow(chieuCao, 2));
	return canhBen;
}

double TinhChuVi(int dayLon, int dayBe, double canhBen) {
	double chuVi = dayLon + dayBe + 2 * canhBen;
	return chuVi;
}

double TinhDienTich(int dayLon, int dayBe, int chieuCao) {
	double dienTich = ((dayLon + dayBe) * chieuCao) / 2.0;
	return dienTich;
}

