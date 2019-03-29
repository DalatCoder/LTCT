// Lab01 - Bài 10 - Xuất danh sách sinh viên

#include <iostream>
#include <iomanip>

using namespace std;

// Định nghĩa hàm main
int main(int argc, const char **argv) {

	cout << endl;
	cout << "\t\t\t\tDANH SACH SINH VIEN" << endl;
	cout << endl;

	cout << setiosflags(ios::left)
		<< setw(15) << "MSSV"
		<< setw(40) << "Ho va ten"
		<< setw(10) << "Khoa"
		<< setw(10) << "Diem"
		<< endl;

	cout << setiosflags(ios::left)
		<< setw(15) << "====="
		<< setw(40) << "========================="
		<< setw(10) << "====="
		<< setw(10) << "====="
		<< endl;

	cout << setiosflags(ios::left)
		<< setw(15) << "1211520"
		<< setw(40) << "Le Duy Tung"
		<< setw(10) << "33"
		<< setw(10) << "4.57"
		<< endl;

	cout << setiosflags(ios::left)
		<< setw(15) << "1210152"
		<< setw(40) << "Tran Van Tien"
		<< setw(10) << "34"
		<< setw(10) << "VT"
		<< endl;

	cout << setiosflags(ios::left)
		<< setw(15) << "1211962"
		<< setw(40) << "Pham Duc Anh"
		<< setw(10) << "33"
		<< setw(10) << "6.48"
		<< endl;

	cout << setiosflags(ios::left)
		<< setw(15) << "1211518"
		<< setw(40) << "Nguyen Hong Phuc"
		<< setw(10) << "36"
		<< setw(10) << "VT"
		<< endl;

	cout << setiosflags(ios::left)
		<< setw(15) << "1211510"
		<< setw(40) << "Pham Minh Duc"
		<< setw(10) << "30"
		<< setw(10) << "8.05"
		<< endl;

	cout << setiosflags(ios::left)
		<< setw(15) << "1211793"
		<< setw(40) << "Nguyen Khac Vy"
		<< setw(10) << "33"
		<< setw(10) << "VT"
		<< endl;

	cout << setiosflags(ios::left)
		<< setw(15) << "1211519"
		<< setw(40) << "Nguyen Tan Tai"
		<< setw(10) << "34"
		<< setw(10) << "2.89"
		<< endl;

	cout << "===========================================================================" << endl;
	// Trả giá trị cho hàm main
	return 0;
}

