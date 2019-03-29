// Chương trình tính chỉ số cơ thể
// Input:
//		- Khối lượng cơ thể
//		- Chiều cao
// Output:
//		- Chỉ số cơ thể

#include <iostream>
#include <conio.h>

using namespace std;

double TinhChiSoBMI(double khoiLuong, double chieuCao);

int main(int argc, const char **argv) {

	double canNang = 0, chieuCao = 0;
	cout << endl << "Nhap vao can nang co the >> "; cin >> canNang;
	cout << endl << "Nhap vao chieu cao co the >> "; cin >> chieuCao;

	cout << endl << "Chi so khoi co the co "
		<< endl << "	- Can nang  = " << canNang
		<< endl << "	- Chieu cao = " << chieuCao
		<< endl << "la: " << TinhChiSoBMI(canNang, chieuCao);

	_getch();
	return 0;
}

double TinhChiSoBMI(double khoiLuong, double chieuCao) {
	double ketQua = 0;
	ketQua = khoiLuong / (chieuCao * chieuCao);
	return ketQua;
}
