#include <iostream>
#include <conio.h>

using namespace std;

int NhapSoTrongMien(int min, int max);
int TimSoNgay(int thang, int nam);

int main(int argc, const char **argv) {

	// Khai báo biến để lưu độ dài các cạnh
	int soNgay = 0, thang = 0, nam = 0;

	// Nhập tháng trong năm
	cout << endl << "Nhap mot thang trong nam: ";
	thang = NhapSoTrongMien(1, 12);

	// Nhập năm
	cout << endl << "Nhap nam duong lich";
	nam = NhapSoTrongMien(1, 3000);

	// Gọi hàm tìm số ngày của tháng và năm đã nhập
	soNgay = TimSoNgay(thang, nam);

	// Xuất kết quả
	cout << endl << "Thang " << thang
		<< " nam " << nam
		<< " co " << soNgay << " ngay.";

	// Dừng chương trình và chờ nhấn 1 phím để kết thúc
	_getch();
	return 0;
}

/*
	* Định nghĩa hàm nhập một số nằm trong đoạn [min...max]
	* Input: 
		- min : số nhỏ nhất có thể nhập
		- max : số lớn nhất có thể nhập
	* Output: Một số nguyên nằm trong đoạn [min...max]
*/
int NhapSoTrongMien(int min, int max) {
	int so; // Khai báo biến để lưu số được nhập

	// Thực hiện việc nhập và kiểm tra giá trị nhập. Nếu
	// giá trị nhập nằm ngoài phạm vi thì yêu cầu nhập lại.
	do {
		cout << endl << "Nhap mot so nguyen trong doan ["
			<< min << "..." << max << "] : ";
		cin >> so;
	} while (so < min || so > max);

	// Gán giá trị so cho hàm và trở về nơi gọi hàm
	return so;
}

/*
	* Định nghĩa hàm tìm số ngày của háng và năm cho trước
	* Input:
		- thang: Tháng trong năm (1 -> 12)
		- nam  : Năm dương lịch (1 -> 3000)
	* Output: Số ngày của tháng trong năm cho trước.
*/
int TimSoNgay(int thang, int nam) {
	// Khai báo biến để lưu số ngày
	int soNgay = 0;

	// Dùng lệnh switch để kiểm tra theo tháng
	switch (thang) {
		// Nếu là tháng 1, 3, 5, 7, 8, 10, 12 thì số ngày là 31
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			soNgay = 31;
			break;

		// Nếu là tháng 4, 6, 9, 11 thì số ngày là 30
		case 4:
		case 6:
		case 9:
		case 11:
			soNgay = 30;
			break;

		// Trường hợp còn lại (tháng 2), số ngày = 28 hoặc
		// 29, phụ thuộc vào năm đó có nhuận hay không.
		default:
		// Kiểm tra xem có phải năm nhuận hay không?
			if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
				soNgay = 29; // Năm nhuận
			else
				soNgay = 28; // Năm không nhuận
			break;
	}
	return soNgay;
}
