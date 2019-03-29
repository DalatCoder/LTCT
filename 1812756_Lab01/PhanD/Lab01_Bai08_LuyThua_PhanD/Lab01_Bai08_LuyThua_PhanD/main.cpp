// Lab01 - Bai08 - Lũy thừa
// Nhập vào 2 số nguyên và tính giá trị biểu thức

#include <iostream>
#include <cmath>

using namespace std;

// Định nghĩa hàm main
int main(int argc, const char **argv) {

	// Khai báo các biến cần thiết
	double x = 0, y = 0;
	int    n = 0;

	// Nhập giá trị cho 2 biến x, y
	cout << "Nhap gia tri cho 2 bien x, y" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	cout << "Nhap so mu >> "; cin >> n;

	// Tính kết quả và hiển thị ra màn hình
	double ketQua = pow(x, n) + pow(y, n);
	cout << "Ket qua cua bieu thuc x^n + y^n = " << ketQua << endl;

	// Trả về giá trị cho hàm main
	return 0;
}

