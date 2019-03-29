// Nạp các thư viện hàm vào chương trình
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

// Định nghĩa hằng số và các kiểu dữ liệu mới

// Khai báo nguyên mẫu các hàm
float NhapMotSoKhacKhong();
void GiaiPhuongTrinhBacHai(float a, float b, float c);
float NhapMotSoKhacKhong_1();

// Định nghĩa hàm main
int main(int argc, const char **argv) {
	// Khai báo biến để lưu độ dài các cạnh
	float a, b, c;

	// Nhập hệ số a khác 0
	a = NhapMotSoKhacKhong();
	
	// Nhập hệ số b
	cout << endl << "Nhap he so b: ";
	cin >> b;

	// Nhập độ dài cạnh c
	cout << endl << "Nhap he so c: ";
	cin >> c;

	// Gọi hàm giải phương trình bậc 2 một ẩn
	GiaiPhuongTrinhBacHai(a, b, c);

	// Dừng chương trình và chờ nhấn 1 phím để kết thúc
	_getch();
	return 0;
}

// Định nghĩa các hàm xử lý

// Định nghĩa hàm nhập một số khác không từ bàn phím
// Input: không có.
// Output: Một số thực khác 0
float NhapMotSoKhacKhong() {
	float so; // Khai báo biến để lưu số thực
	
	// Thực hiện việc nhập và kiểm tra giá trị nhập
	// Nếu giá trị nhập bằng 0 thì yêu cầu nhập lại
	do {
		cout << endl << "Nhap mot so thuc (khac 0) : ";
		cin >> so;
	} while (so == 0);

	// Gán giá trị so cho hàm và trở về nơi gọi hàm
	return so;
}

float NhapMotSoKhacKhong_1() {
	float so = 0; // Khai báo biến để lưu số thực

			  // Thực hiện việc nhập và kiểm tra giá trị nhập
			  // Nếu giá trị nhập bằng 0 thì yêu cầu nhập lại
	while (so == 0) {
		cout << endl << "Nhap mot so thuc (khac 0) : ";
		cin >> so;
	}

	// Gán giá trị so cho hàm và trở về nơi gọi hàm
	return so;
}

/*
	* Định nghĩa hàm giải phương trình bậc 2
	* Input:
		- a: hệ số a
		- b: hệ số b
		- c: hệ số c
	* Output: không có. chỉ xuất ra nghiệm của phương trình
*/
void GiaiPhuongTrinhBacHai(float a, float b, float c) {
	// Khai báo biến
	float	delta = 0, // để lưu giá trị delta
			x = 0;	   // để lưu nghiệm của chương trình

	// Tính giá trị delta
	delta = b * b - 4 * a * c;

	// Kiểm tra phương trình có nghiệm hay không?
	if (delta < 0) {
		// Trường hợp vô nghiệm: Xuất thông báo PT vô nghiệm
		cout << endl << "Phuong trinh vo nghiem";
	}
	else if (delta == 0.0) {
		// TH có nghiệm kép: Tìm nghiệm -> Xuất kết quả
		x = -b / (2 * a);

		// Xuất thông báo có nghiệm kép
		cout << endl << "Phuong trinh co nghiem kep x = " << x;
	}
	else { 
		// TH có 2 nghiệm phân biệt
		
		// Xuất thông báo có 2 nghiệm phân biệt
		cout << endl << "Phuong trinh co 2 nghiem phan biet : ";

		// Tìm nghiệm thứ nhất
		x = (-b + sqrt(delta)) / (2 * a);

		// Xuất nghiệm thứ nhất
		cout << "x1 = " << setprecision(5) << x;

		// Tìm nghiệm thứ hai
		x = (-b - sqrt(delta)) / (2 * a);

		// Xuất nghiệm thứ hai
		cout << " va x2 = " << setprecision(5) << x;
	}

}
