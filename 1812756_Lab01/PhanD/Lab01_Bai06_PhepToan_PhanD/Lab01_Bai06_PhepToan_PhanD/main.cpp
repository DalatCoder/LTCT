// Lab01 - Bài 06 - Phép toán
// Nhập vào 2 biến số nguyên và thực hiện các phép tính

#include <iostream>

using namespace std;

// Định nghĩa hàm main
int main(int argc, const char **argv) {

	// Khai báo 2 biến x, y
	int x = 0, y = 0;

	// Yêu cầu người dùng nhập giá trị 
	cout << "Nhap gia tri cho bien x >> "; cin >> x;
	cout << "Nhap gia tri cho bien y >> "; cin >> y;

	x++;
	cout << "x++ | x = " << x << endl;

	x--;
	cout << "x-- | x = " << x << endl;

	++x;
	cout << "++x | x = " << x << endl;
	
	--x;
	cout << "--x | x = " << x << endl;

	x = x / y;
	cout << "x = x / y | x = " << x << ", y = " << y << endl;

	y = x % y;
	cout << "y = x % y | x = " << x << ", y = " << y << endl;

	x *= y;
	cout << "x *= y | x = " << x << ", y = " << y << endl;

	// Trả giá trị về cho hàm main
	return 0;
}

