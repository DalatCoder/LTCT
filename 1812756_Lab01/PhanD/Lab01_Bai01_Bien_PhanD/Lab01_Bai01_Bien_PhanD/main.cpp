// Phần D - Bài tập bắt buộc
// Bài 01 - Biến

#include <iostream>

using namespace std;

// Định nghĩa hàm main
int main(int argc, const char **argv) {
	// Khai báo các biến và khởi tạo giá trị ban đầu
	int k = 0;
	long int x = 0;
	float a = 0;
	double h = 0;
	char c = ' ';

	// Xuất thông báo yêu cầu người dùng nhập giá trị cấc biến từ bàn phím
	cout << "Nhap gia tri bien k >> "; cin >> k;
	cout << "Nhap gia tri bien x >> "; cin >> x;
	cout << "Nhap gia tri bien a >> "; cin >> a;
	cout << "Nhap gia tri bien h >> "; cin >> h;
	cout << "Nhap 1 ky tu >> "; cin >> c;

	// Hiển thị giá trị các biến ra màn hình
	cout << endl << "Gia tri cua bien k la: " << k
		<< endl << "Gia tri cua bien x la: " << x
		<< endl << "Gia tri cua bien a la: " << a
		<< endl << "Gia tri cua bien h la: " << h
		<< endl << "Gia tri cua bien c la: " << c;

	cout << endl;
	// Trả về giá trị cho hàm main
	return 0;
}

