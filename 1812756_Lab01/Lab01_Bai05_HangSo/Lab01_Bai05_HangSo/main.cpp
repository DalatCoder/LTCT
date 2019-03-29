// Nạp các thư viện hàm vào chương trình
#include <iostream>
#include <conio.h>

using namespace std;

// Định nghĩa các hằng số
/*
	#define		MAX		100
	#define		KHOA	"Cong nghe thong tin"
	#define		PI		3.1415926
	#define		TAB		'\t'
*/

const int   MAX    =  100;
const char  KHOA[] =  "Cong nghe thong tin";
const float PI     =  3.1415926;
const char  TAB    =  '\t';

// Định nghĩa hàm main
int main()
{
	// Xuất giá trị các hằng số
	cout << endl << "Gia tri cua hang so MAX la  : " << MAX;
	cout << endl << "Gia tri cua hang so KHOA la : " << KHOA;
	cout << endl << "Gia tri cua hang so PI  la  : " << PI;
	cout << endl << TAB << "Dong nay duoc thut le 1 dau TAB";

	//Khai báo biến r kiểu số thực để lưu bán kính hình tròn
	float r;

	//Xuất thông báo yêu cầu người dùng nhập bán kính
	cout << endl << "Nhap ban kinh hinh tron: ";

	//Chờ người dùng nhập giá trị rồi gán cho biến r
	cin >> r;

	//Khai báo 2 biến số thực để lưu chu vi và diện tích
	float chuVi, dienTich;

	//Tính chu vi và diện tích hình tròn
	chuVi = 2 * PI * r;
	dienTich = PI * r * r;

	//Xuất chu vi và diện tích hình tròn ra màn hình
	cout << endl << "Ban kinh: R = " << r
		<< ", Chu vi: C = " << chuVi
		<< ", Dien tich: S = " << dienTich;

	// Dừng chương trình và chờ nhấn 1 phím để kết thúc
	_getch();

	// Trả về giá trị 1
	return 1;
}


