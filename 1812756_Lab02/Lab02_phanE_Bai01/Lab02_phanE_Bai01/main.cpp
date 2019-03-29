// Chương trình tính chu vi và diện tích hình tròn
// Input
//		Bán kính R
// Output
// Chu vi và diện tích hình tròn

#include <iostream>
#include <conio.h>

// Định nghĩa hằng số PI
#define		PI		3.1415926

using namespace std;

// Khai báo nguyên mẫu hàm
double TinhChuViHinhTron(double);
double TinhDienTichHinhTron(double);

// Định nghĩa hàm main
int main(int argc, const char **argv) {

	// Khai báo biến cần thiết
	double r = 0, chuVi = 0, dienTich = 0;

	// Nhập giá trị r tu ban phim
	cout << endl << "Nhap ban kinh hinh tron: ";
	cin >> r;

	chuVi = TinhChuViHinhTron(r);
	dienTich = TinhDienTichHinhTron(r);

	cout << endl << "Hinh tron co ban kinh = " << r
		<< " co chu vi la " << chuVi << ", "
		<< " co dien tich la " << dienTich;

	_getch();
	return 1;
}

// Định nghĩa hàm tính chu vi hình tròn
double TinhChuViHinhTron(double r) {
	double ketQua = 0;
	ketQua = 2 * PI * r;
	return ketQua;
}

// Định nghĩa hàm tính diện tích hình tròn
double TinhDienTichHinhTron(double r) {
	double ketQua = 0;
	ketQua = PI * (r * r);
	return ketQua;
}

