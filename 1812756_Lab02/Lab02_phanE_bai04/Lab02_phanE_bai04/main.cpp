// Chương trình tính hình trụ tròn
// Input:
//		bán kính mặt đáy
//		chiều cao 
// Output:
//		Chu vi mặt đáy
//		Diện tích xung quanh
//		Diện tích toàn phần
//		Thể tích

#include <iostream>
#include <conio.h>
#include <cmath>

#define		PI		3.1415926

using namespace std;

double TinhTheTich(int banKinh, int chieuCao);
double TinhDienTich_XQ(int banKinh, int chieuCao);
double TinhDienTich_TP(int banKinh, int chieuCao);

int main(int argc, const char **argv) {

	int banKinh = 0, chieuCao = 0;
	double theTich = 0, dienTichXQ = 0, dienTichTP = 0;

	cout << endl << "Nhap cac thong so cua hinh tru tron: ";
	cout << endl << "Ban kinh day >> "; cin >> banKinh;
	cout << endl << "Chieu cao >> "; cin >> chieuCao;

	theTich = TinhTheTich(banKinh, chieuCao);
	dienTichXQ = TinhDienTich_XQ(banKinh, chieuCao);
	dienTichTP = TinhDienTich_TP(banKinh, chieuCao);

	cout << endl << "Hinh tru tron co thong so: "
		<< endl << "	- Ban kinh day = " << banKinh
		<< endl << "	- Chieu cao    = " << chieuCao
		<< endl << "co: "
		<< endl << "	- The tich             = " << theTich
		<< endl << "	- Dien tich xung quanh = " << dienTichXQ
		<< endl << "	- Dien tich toan phan  = " << dienTichTP;

	_getch();
	return 0;
}

double TinhTheTich(int banKinh, int chieuCao) {
	double theTich = 0;
	theTich = 4 * PI * pow(banKinh, 2) * chieuCao;
	return theTich;
}

double TinhDienTich_XQ(int banKinh, int chieuCao) {
	double dienTichXQ = 0;
	dienTichXQ = 2 * PI * banKinh * chieuCao;
	return dienTichXQ;
}

double TinhDienTich_TP(int banKinh, int chieuCao) {
	double dienTichTP = 0;
	dienTichTP = TinhDienTich_XQ(banKinh, chieuCao) + 2 * PI * pow(banKinh, 2);
	return dienTichTP;
}


