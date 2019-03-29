// Lab01 - Bài 05 - Đổi giờ phút giây
// Nhập vào số giây, đổi ra giờ phút giây tương ứng

#include <iostream>

#define		MAX		3600
#define		SIXTY	60

using namespace std;

// Định nghĩa hàm main
int main(int argc, const char **argv) {

	// Khai báo các biến cần thiết
	int n = 0, gio = 0, phut = 0, giay = 0;

	// Yêu cầu người dùng nhập vào số giây
	cout << "Nhap vao so giay >> "; cin >> n;

	// Tính giờ
	gio = n / MAX;

	// Tính phút
	phut = (n % MAX) / SIXTY;

	// Tính giây
	giay = (n % MAX) % SIXTY;

	// Hiển thị giờ phút giây lên màn hình
	cout << "So giay da nhap vao: " << n << endl;
	cout << "Gia tri sau khi chuyen doi: (hh:mm:ss) " << gio << " : " << phut << " : " << giay << endl;

	// Trả giá trị về cho hàm main
	return 0;
}

