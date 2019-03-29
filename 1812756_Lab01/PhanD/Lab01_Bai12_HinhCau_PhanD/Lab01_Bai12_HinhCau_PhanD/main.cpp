// Lab01 - Bài 11 - Hình cầu
#include <iostream>
#include <cmath>
#define		PI		3.14

using namespace std;

int main(int argc, const char **argv) {

	int banKinh = 0;
	cout << "Nhap vao ban kinh khoi cau >> "; cin >> banKinh;

	double theTich = (4 / 3) * PI * pow(banKinh, 3);
	double dienTich = 4 * PI * pow(banKinh, 2);

	cout << "Khoi cau voi ban kinh = " << banKinh << ", co:" << endl;
	cout << "The tich = " << theTich << endl;
	cout << "Dien tich mat cau = " << dienTich << endl;

	return 0;
}
