// Nạp các thư viện hàm vào chương trình
#include <iostream>
#include <conio.h>

using namespace std;

// Định nghĩa hàm main
int main()
{
	// Khai báo một biến kiểu số nguyên, tên là x
	int x = 10;

	// Xuất giá trị của biến x ra màn hình
	cout << "x = " << x << endl;

	int y = 0, z = 1;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	// Xuất tổng của 3 biến
	// cout << "x + y + z = " << x + y + z << endl;
	cout << x << " + "
		<< y << " + "
		<< z << " = "
		<< x + y + z << endl;

	// Khai báo 2 biến lưu kiểu nguyên dể lưu chiều dài
	// và chiều rộng của hình chữ nhật
	int dai, rong;

	// Xuất thông báo cho người dùng để nhập chiều dài
	cout << endl << "Nhap chieu dai cua HCN : ";

	// Chờ người dùng nhập giá trị rồi gán cho biến dai
	cin >> dai;

	// Xuất thông báo cho người dùng để nhập chiều rộng
	cout << endl << "Nhap chieu rong cua HCN : ";

	// Chờ người dùng nhập giá trị rồi gán cho biến rong
	cin >> rong;

	// Xuất giá trị của hai biến dai & rong
	cout << endl
		<< "Chieu dai hinh chu nhat la " << dai << ", "
		<< "chieu rong hinh chu nhat la " << rong;

	// Khai báo hai biến kiểu nguyên mới để lưu
	// chu vi và diện tích của hình chữ nhật
	int chuVi, dienTich;

	// Tính chu vì và diện tích của hình chữ nhật
	chuVi = (dai + rong) * 2;
	dienTich = dai * rong;

	// Xuất chu vi và diện tích của hình chữ nhật
	cout << endl << "Chu vi cua HCN là : " << chuVi
		<< endl << "Dien tich cua HCN : " << dienTich;

	// Dừng chương trình và chờ nhấn 1 phím để kết thúc
	_getch();

	// Trả về giá trị 1
	return 1;
}

