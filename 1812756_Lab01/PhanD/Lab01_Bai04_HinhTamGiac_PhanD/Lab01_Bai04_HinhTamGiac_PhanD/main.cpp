// Lab 01 - Bài 04 - Hình tam giác
// Nhập vào độ dài 3 cạnh của tam giác, tính chu vi diện tích hình tam giác

#include <iostream>
#include <cmath>

using namespace std;

// Định nghĩa hàm main
int main(int argc, const char **argv) {
	
	// Khai báo biến a, b, c chứa giá trị độ dài
	int a = 0, b = 0, c = 0;

	// Khai báo biến chứa chu vi, diện tích, và biến p trong công thức
	double chuVi = 0, dienTich = 0, p = 0;

	// Nhập độ dài 3 cạnh tam giác
	cout << "Nhap do dai 3 canh cua 1 tam giac: " << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	// Tính chu vi
	chuVi = a + b + c;

	// Phép gán p
	p = chuVi / 2.0;

	// Tính diện tích
	dienTich = sqrt(p*(p - a)*(p - b)*(p - c));

	// Xuất chu vi và diện tích của tam giác
	cout << "Tam giac co do dai 3 canh " << a << ", " << b << ", " << c << " co:" << endl;
	cout << "Chu vi = " << chuVi << endl;
	cout << "Dien tich = " << dienTich << endl;

	// Trả về giá trị cho hàm main
	return 0;
}

