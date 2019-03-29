// Lab01 - Bài 07 - Số lớn
// Nhập vào 1 số tối thiểu 10 chữ số

#include <iostream>

using namespace std;

// Định nghĩa hàm main
int main(int argc, const char **argv) {

	int number = 0;
	cout << "Nhap vao 1 so nguyen >10 chu so: ";
	cin >> number;

	cout << "So lon vua nhap la: " << number << endl;
	// Trả về giá trị cho hàm main
	return 0;
}

/*
 * Giải thích kết quả
 * Do giá trị nhập vào vượt quá giới hạn có thể lưu trữ của biến int
 * cho nên biến int không thể lưu trữ kết quả đã nhập
*/

