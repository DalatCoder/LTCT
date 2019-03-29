// Tính hình cầu
// Input:
//		- Bán kính hình cầu
// Ouptput:
//		- Diện tích mặt cầu
//		- Thể tích khối cầu

#include <iostream>
#include <conio.h>
#include <cmath>

#define		PI		3.1415926

using namespace std;

double TinhTheTich(int banKinh);
double TinhDienTich(int banKinh);

int main() {

	int banKinh = 0;
	cout << endl << "Nhap vao ban kinh cua hinh cau: ";
	cin >> banKinh;

	double theTich = TinhTheTich(banKinh);
	double dienTich = TinhDienTich(banKinh);

	cout << endl << "Hinh cau co ban kinh: " << banKinh
		<< endl << "co:"
		<< endl << "	- The tich  = " << theTich
		<< endl << "	- Dien tich = " << dienTich;

	_getch();
	return 0;
}

double TinhTheTich(int banKinh) {
	double theTich = 0;
	theTich = (4 / 3) * PI * pow(banKinh, 3);
	return theTich;
}

double TinhDienTich(int banKinh) {
	double dienTich = 0;
	dienTich = 4 * PI * pow(banKinh, 2);
	return dienTich;
}

