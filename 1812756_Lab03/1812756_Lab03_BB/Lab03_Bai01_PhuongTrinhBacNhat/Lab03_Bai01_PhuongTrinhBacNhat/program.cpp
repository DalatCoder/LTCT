#include <iostream>
#include <conio.h>

using namespace std;

void GiaiPTBacNhat(double, double);

int main(int argc, const char **argv) {

	double a = 0, b = 0;
	cout << "\nNhap vao he so a, b trong phuong trinh ax + b = 0";
	cout << "\na = ";  cin >> a;
	cout << "\nb = "; cin >> b;

	GiaiPTBacNhat(a, b);

	_getch();
	return 0;
}

/*
	Định nghĩa hàm giải phương trình bậc nhất
	Input:
		a : giá trị ax
		b : giá trị b
	Output:
		Không. Xuất kết quả ra màn hình trực tiếp
*/
void GiaiPTBacNhat(double a, double b) {
	double x = 0;

	if (a == 0) {
		if (b == 0)
			cout << "\nPhuong trinh co vo so nghiem!";
		else
			cout << "\nPhuong trinh vo nghiem!";
	}
	else {
		x = -b / a;
		cout << "\nPhuong trinh " << a << "x + " << b
			<< " co nghiem x = " << x;
	}
}

