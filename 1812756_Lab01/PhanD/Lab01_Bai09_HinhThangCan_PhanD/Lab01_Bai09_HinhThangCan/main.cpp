// Lab01 - Bài 09 - Hình thang cân

#include <iostream>
#include <cmath>

using namespace std;

// Định nghĩa hàm main
int main(int argc, const char **argv) {

	int dayLon = 0, dayBe = 0, chieuCao = 0;
	double chuVi = 0, dienTich = 0;

	cout << "Nhap thong tin hinh thang can >> " << endl;
	cout << "Day lon   = "; cin >> dayLon;
	cout << "Day be    = "; cin >> dayBe;
	cout << "Chieu cao = "; cin >> chieuCao;

	double canhBen = sqrt(pow((dayLon - dayBe) / 2, 2) + pow(chieuCao, 2));
	chuVi = dayLon + dayBe + 2 * canhBen;
	dienTich = ((dayLon + dayBe) * chieuCao) / 2;

	cout << "Thong tin ve hinh thang can:" << endl;
	cout << "Do dai day lon   : " << dayLon << endl;
	cout << "Do dai day be    : " << dayBe << endl;
	cout << "Do dai chieu cao : " << chieuCao << endl;

	cout << "Chu vi hinh thang can: " << chuVi << endl;
	cout << "Dien tich hinh thang can: " << dienTich << endl;

	// Trả về giá trị cho hàm main
	return 0;
}

