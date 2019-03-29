// Lab01 - Bài 11 - Hình trụ tròn
#include <iostream>
#define		PI		3.14

using namespace std;

int main(int argc, const char **argv) {

	int banKinhDay = 0, chieuCao = 0;

	cout << "Nhap vao ban kinh day >> "; cin >> banKinhDay;
	cout << "Nhap vao chieu cao    >> "; cin >> chieuCao;

	double theTich = PI * (banKinhDay*banKinhDay) * chieuCao;
	double dienTichXQ = 2 * PI * banKinhDay * chieuCao;
	double dienTichTP = dienTichXQ + 2 * PI * (banKinhDay*banKinhDay);

	cout << "Hinh tru voi ban kinh day = " << banKinhDay << ", chieu cao = " << chieuCao << ", co: " << endl;
	cout << "The tich = " << theTich << endl;
	cout << "Dien tich xung quanh = " << dienTichXQ << endl;
	cout << "Dien tich toan phan  = " << dienTichTP << endl;

	return 0;
}

