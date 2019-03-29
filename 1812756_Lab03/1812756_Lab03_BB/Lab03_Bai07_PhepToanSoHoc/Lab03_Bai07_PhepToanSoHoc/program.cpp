#include <iostream>
#include <conio.h>

using namespace std;

double TinhBieuThuc(double x, double y, char k);

int main(int argc, const char **argv) {
	
	double x = 0, y = 0;

	cout << "\nNhap vao 2 so thuc";
	cout << "\nx >> "; cin >> x;
	cout << "\ny >> "; cin >> y;

	char k = ' ';
	while (k != '+' && k != '-' && k != '*' && k != '/') {
		cout << "\nNhap vao phep toan can thuc hien (+, -, *, /) : ";
		cin >> k;
	}

	system("cls");
	cout << x << " " << k << " " << y << " = " << TinhBieuThuc(x, y, k);
	
	_getch();
	return 0;
}

double TinhBieuThuc(double x, double y, char k) {
	double ketQua = 0;
	switch (k) {
		case '+':
			ketQua = x + y;
			break;
		case '-':
			ketQua = x - y;
			break;
		case '*':
			ketQua = x * y;
			break;
		case '/':
			ketQua = x / y;
			break;
		default:
			break;
	}
	return ketQua;
}