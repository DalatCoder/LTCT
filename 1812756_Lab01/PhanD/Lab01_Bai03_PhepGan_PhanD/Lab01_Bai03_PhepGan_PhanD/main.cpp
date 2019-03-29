// Lab01 - Bài 03 Phép gán
// Viết chương trình nhập giá trị 2 biến x, y và tính các biểu thức

#include <iostream>

using namespace std;

// Định nghĩa hàm main
int main(int argc, const char **argv) {

	// Khai báo 2 số nguyên x và y
	int x = 0, y = 0;

	// Khai báo biến z để lưu kết quả các biểu thức
	int z = 0;

	cout << "Nhap gia tri cho bien x >> "; cin >> x;
	cout << "Nhap gia tri cho bien y >> "; cin >> y;

	// Tính và xuất các biểu thức lên màn hình
	z = x + y;
	cout << "x + y = " << z << endl;

	z = x - y;
	cout << "x - y = " << z << endl;

	z = x * y;
	cout << "x * y = " << z << endl;

	z = x / y;
	cout << "x / y = " << z << endl;

	z = x % y;
	cout << "x % y = " << z << endl;

	// Trả giá trị về cho hàm main
	return 0;
}

