#include <iostream>
#include <conio.h>

using namespace std;

int TinhGiaiThua(unsigned int);
int TinhTong(unsigned int);

int main(int argc, const char **argv) {

	// Khai báo biến
	unsigned int n = 0;

	// Nhập giá trị cho biến
	cout << endl << "Nhap mot so nguyen khong am >> "; 
	cin >> n;

	// Khai báo biến để lưu kết quả
	long ketQua = 0;

	// Gọi hàm tính n!
	ketQua = TinhGiaiThua(n);

	// Xuất kết quả
	cout << endl << n << "! = " << ketQua;

	// Gọi hàm tính tổng n số nguyên dương đầu tiên
	ketQua = TinhTong(n);

	// Xuất kết quả
	cout << endl << "1 + 2 + ... + " << n << " = " << ketQua;

	_getch();
	return 0;
}

/*
	Định nghĩa hàm tính giai thừa của N
	Input:
		- n: Một số nguyên không âm
	Output:
		- Giai thừa của n (n!)
*/
int TinhGiaiThua(unsigned int n) {
	int kq = 0;
	if (n < 2) {
		kq = 1;
	}
	else {
		kq = 1; // Khai báo biến lưu kết quả

		// Duyệt qua các số từ 2 tới n
		for (int i = 2; i <= n; i++) {
			kq *= i;
		}
	}

	return kq;
}

/*
	Định nghĩa hàm tính tổng N số nguyên dương đầu tiên
	Input:
		n: Một số nguyên không âm
	Output:
		Tổng các số từ 1 tới n
*/
int TinhTong(unsigned int n) {
	int sum = 0; // Khai báo biến để lưu kết quả

	// Duyệt qua các số từ 1 tới n
	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	return sum;
}
