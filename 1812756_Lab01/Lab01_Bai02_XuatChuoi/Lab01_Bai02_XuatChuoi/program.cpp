// Nạp các thư viện hàm vào chương trình
#include <iostream>
#include <conio.h>

using namespace std;

// Định nghĩa hàm main
int main()
{
	// Xuất 2 chuỗi nằm liền nhau
	cout << "Xin chao" << " tat ca cac ban" << endl;
	cout << "Chao nam moi" << 2015 << endl;

	// Xuất nhiều giá trị trên 1 dòng
	cout << endl << "Nam" << 2015
		<< " thuoc the ky " << 21
		<< " va co ten am lich la " << "At Mui";

	// Dùng 1 lệnh cout để xuất trên nhiều dòng
	cout << endl
		<< endl << "Ho va ten : Phan Thanh Binh"
		<< endl << "Gioi tinh : Nam"
		<< endl << "Ngay sinh : 27/10/1995"
		<< endl << "Diem TB   : " << 7.75
		<< endl << "SV Khoa   : Cong nghe Thong tin";

	// Dừng chương trình và chờ nhấn 1 phím để kết thúc
	_getch();

	// Trả về giá trị 1
	return 1;
}

