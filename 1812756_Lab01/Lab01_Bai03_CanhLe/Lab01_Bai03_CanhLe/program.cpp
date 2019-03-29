// Nạp các thư viện vào chương trình
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

// Định nghĩa hàm main
int main()
{
	// Xuất dòng tiêu đề
	cout << setiosflags(ios::left)   // Thiết lập canh lề trái
		<< setw(10) << "MSSV"        // MSSV chiếm 10 cột
		<< setw(25) << "Ho va ten"   // Họ tên chiếm 25 cột
		<< setw(10) << "Lop"         // Lớp chiếm 10 cột
		<< setw(10) << "Diem TB"     // Điểm trung bình chiếm 10 cột
		<< setw(10) << "Diem TL"     // Điểm tích lũy chiếm 10 cột
		<< endl;                     // Xuống dòng

	// Xuất thông tin sinh viên
	cout << setiosflags(ios::left)
		<< setw(10) << "1410234"
		<< setw(25) << "Nguyen Quang Tam"
		<< setw(10) << "CTK38CD"
		<< setw(10) << 7.50
		<< setw(10) << setprecision(2) << 5.75
		<< endl;

	// Xuất thông tin sinh viên
	cout << setiosflags(ios::left)
		<< setw(10) << "1410231"
		<< setw(25) << "Nguyen Quang A"
		<< setw(10) << "CTK38CD"
		<< setw(10) << 7.50
		<< setw(10) << setprecision(2) << 5.75
		<< endl;

	// Xuất thông tin sinh viên
	cout << setiosflags(ios::left)
		<< setw(10) << "1410232"
		<< setw(25) << "Nguyen Quang B"
		<< setw(10) << "CTK38CD"
		<< setw(10) << 7.50
		<< setw(10) << setprecision(2) << 5.75
		<< endl;

	// Xuất thông tin sinh viên
	cout << setiosflags(ios::left)
		<< setw(10) << "1410233"
		<< setw(25) << "Nguyen Quang C"
		<< setw(10) << "CTK38CD"
		<< setw(10) << 7.50
		<< setw(10) << setprecision(2) << 5.75
		<< endl;

	// Xuất thông tin sinh viên
	cout << setiosflags(ios::left)
		<< setw(10) << "1410238"
		<< setw(25) << "Nguyen Quang D"
		<< setw(10) << "CTK38CD"
		<< setw(10) << 7.50
		<< setw(10) << setprecision(2) << 5.75
		<< endl;

	// Dừng chương trình và chờ nhấn 1 phím để kết thúc
	_getch();

	// Trả về giá trị 1
	return 1;
}

