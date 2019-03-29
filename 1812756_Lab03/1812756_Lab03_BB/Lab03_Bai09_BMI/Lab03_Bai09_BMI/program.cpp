#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, const char **argv) {

	double w = 0, h = 0;
	cout << "\nNhap vao can nang (kg) >> ";
	cin >> w;

	cout << "\nNhap vao chieu cao (m) >> ";
	cin >> h;

	double BMI = w / (h * h);

	if (BMI < 15) {
		// Đói khát
		cout << "\nBan can phai an va uong nhieu hon";
	}
	else if (BMI < 17.5) {
		// Biếng ăn
		cout << "\nBan can phai an nhieu hon";
	}
	else if (BMI < 18.5) {
		// Thiếu cân
		cout << "\nBan dang trong tinh trang thieu can";
		cout << "\nBan can an nhieu hon";
	}
	else if (BMI < 25) {
		cout << "\nChuc mung, chi so BMI cua ban o muc ly tuong";
	}
	else if (BMI < 30) {
		cout << "\nBan dang bi thua can";
		cout << "\nBan can dieu chinh khau phan an hang ngay mot cach hop ly";
	}
	else if (BMI < 40) {
		cout << "\nBan bi beo phi";
		cout << "\nBan nen gap bac si cang som cang tot";
	}
	else {
		cout << "\nTre em bi beo phi";
	}

	_getch();
	return 0;
}

