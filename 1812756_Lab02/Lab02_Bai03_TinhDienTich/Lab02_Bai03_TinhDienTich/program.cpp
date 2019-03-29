#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

// Khai báo nguyên mẫu hàm
int TinhDienTichHCD(int dai, int rong);
double TinhDienTichTamGiac(int canhA, int canhB, int canhC);

int main(int argc, const char **argv) {

	// Khai báo biến để lưu độ dài các cạnh
	int a, b, c;

	// Khai báo biến để lưu diện tích
	double dienTich;

	// Nhập độ dài cạnh a
	cout << endl << "Nhap do dai canh a: ";
	cin >> a;

	// Nhập độ dài cạnh a
	cout << endl << "Nhap do dai canh b: ";
	cin >> b;

	// Nhập độ dài cạnh a
	cout << endl << "Nhap do dai canh c: ";
	cin >> c;

	// Gọi hàm tính diện tích hình chữ nhật khi biết
	// chiều dài a và chiều rộng b
	dienTich = TinhDienTichHCD(a, b);

	// Xuất diện tích của hình chữ nhật
	cout << endl << "Dien tich cua hinh chu nhat co "
		<< "chieu dai " << a << " va "
		<< "chieu rong " << b << " la "
		<< dienTich;

	// Gọi hàm tính diện tích hình tam giác khi biết
	// chiều dài 3 cạnh: a, b, c
	dienTich = TinhDienTichTamGiac(a, b, c);

	// Xuất diện tích của hình tam giác
	cout << endl << "Dien tich cua hinh tam giac co "
		<< "3 canh: a = " << a << ", "
		<< "b = " << b << ", c = " << c << " la "
		<< dienTich;

	return 0;
}

// Định ngĩa hàm tính diện tích hình chữ nhật
// Input:
	// dai: chiều dài của hình chữ nhật
	// rong: chiều rộng của hình chữ nhật
// Output: diện tích của hình chữ nhật
int TinhDienTichHCD(int dai, int rong) {
	int dt; // Khai báo biến lưu diện tích
	// Tính diện tích, lưu vào biến dt
	dt = dai * rong;

	// Gán giá trị dt cho hàm và trả về nơi gọi hàm
	return dt;
}

// Định nghĩa hàm tính diện tích hình tam giác
// Input:
// canhA: độ dài cạnh A
// canhB: độ dài cạnh b
// canhC: độ dài cạnh C
// Output: diện tích của hình tam giác

double TinhDienTichTamGiac(int canhA, int canhB, int canhC) {
	// Khai báo biến
	double dt,		// để lưu diện tích
			p;		// để lưu nửa chư vi

	// Tính giá trị nửa chu vi, gán cho biến p
	p = (canhA + canhB + canhC) / 2.0;

	// Tính diện tích, lưu vào biến dt
	dt = sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));

	// Gán giá trị dt cho hàm và trở về nơi gọi hàm
	return dt;
}

























