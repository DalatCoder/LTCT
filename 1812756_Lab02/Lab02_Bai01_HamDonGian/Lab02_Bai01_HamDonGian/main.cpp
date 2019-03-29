// Nạp các thư viện hàm vào chương trình
#include <iostream>
#include <conio.h>

using namespace std;

// Định nghĩa hằng số và các kiểu dữ liệu mới

// Khai báo nguyên mẫu của các hàm
void ThongBao();
void XuatKyTu(short);
void XuatPhuongTrinh(float, float);

// Định nghĩa hàm MAIN

int main(int argc, const char **argv) {

	// Gọi hàm ThongBao
	ThongBao();

	// Gọi hàm xuất ký tự
	XuatKyTu(157); // Dùng giá trị làm đối số

	// Khai báo biến kiểu số nguyên tên là dollar và ma
	short dollar = 36, ma;
	XuatKyTu(dollar); // Dùng tên biến làm đối số

	// Nhập mã ASCII từ bàn phím rồi truyền vào hàm
	cout << endl << "Nhap 1 so trong doan [30...255]: ";
	cin >> ma;

	XuatKyTu(ma); // Dùng tên biến làm đối số

	// Gọi hàm xuất phương trình
	XuatPhuongTrinh(2.3, 5); // Dùng giá trị làm đối số

	// Khai báo hai biến kiểu sô thực
	float p, q = 10;
	XuatPhuongTrinh(7.5, q); // Dùng cả giá trị và biến

	// Nhập giá trị thực từ bàn phím, lưu vào biến p
	cout << endl << "Nhap mot so thuc: ";
	cin >> p;

	XuatPhuongTrinh(p, q); // Dùng tên biến làm đối số

	// Dừng chương trình và chờ nhấn 1 phím bất kỳ để kết thúc
	_getch();

	// Trả về giá trị 1
	return 1;
}

// Định nghĩa các hàm xử lý

void ThongBao() {
	cout << endl << "Ban phai hoan thanh bai tap nay.";
}

void XuatKyTu(short ma) {
	char kyTu = (char)ma;
	cout << endl << ma << " <=> " << kyTu;
}

// Định nghĩa hàm xuất ra phương trình bậc nhất ax + b = 0
// Input:
//		a: Hệ số a
//		b: Hệ số b
// Output: không có
void XuatPhuongTrinh(float a, float b) {
	cout << endl << a << " * x + " << b << " = 0";
}
