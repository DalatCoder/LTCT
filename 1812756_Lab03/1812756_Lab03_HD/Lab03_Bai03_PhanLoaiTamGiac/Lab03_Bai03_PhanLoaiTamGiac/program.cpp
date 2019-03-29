#include <iostream>
#include <conio.h>

using namespace std;

int PhanLoaiTamGiac(double a, double b, double c);
void ThongBao(int loaiTG, double a, double b, double c);

int main(int argc, const char **argv) {
	
	double a = 0, b = 0, c = 0; // Lưu độ dài 3 cạnh của tam giác

	cout << endl << "Nhap do dai canh a >> "; cin >> a;
	cout << endl << "Nhap do dai canh b >> "; cin >> b;
	cout << endl << "Nhap do dai canh c >> "; cin >> c;

	int ketQua = PhanLoaiTamGiac(a, b, c);
	ThongBao(ketQua, a, b, c);

	_getch();
	return 0;
}

/*
	* Định nghĩa hàm phân loại tam giác
	* Input:
		- a: độ dài cạnh a
		- b: độ dài cạnh b
		- c: độ dài cạnh c
	* Ouput:
		- 1: tam giác đều
		- 2: tam giác cân
		- 3: tam giác vuông
		- 4: tam giác vuông cân
		- 5: tam giác thường
		- 0: không phải tam giác
*/
int PhanLoaiTamGiac(double a, double b, double c) {
	int kq = 0;

	// Có phải a, b, c là 3 cạnh của tam giác
	if (a + b > c && b + c > a && c + a > b) {
		// Có phải tam giác đều
		if (a == b && b == c)
			kq = 1;
		else {
			// Không phải tam giác đều
			// Có phải tam giác cân
			if (a == b || b == c || c == a) {
				// Có phải tam giác vuông
				if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
					kq = 4;
				else
					// Không phải tam giác vuông
					kq = 2;
			}
			else {
				// Không phải tam giác cân	
				// Có phải tam giác vuông
				if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
					kq = 3;
				else
					// Không phải tam giác vuông
					// Là tam giác thường
					kq = 5;
			}

		}
	}
	return kq;
}

/*
	* Định nghĩa hàm thonog báo kết quả phân loại tam giác
	* Input:
		- a: độ dài cạnh a
		- b: độ dài cạnh b
		- c: độ dài cạnh c
	* Output: không có. chỉ xuất thông báo
*/
void ThongBao(int loaiTG, double a, double b, double c) {
	switch (loaiTG) {
		case 0:
			cout << endl << a << ", " << b << ", " << c
				<< " khong phai la 3 canh cua 1 tam giac";
			break;
		case 1:
			cout << endl << a << ", " << b << ", " << c
				<< " la do dai 3 canh cua 1 tam giac deu";
			break;
		case 2:
			cout << endl << a << ", " << b << ", " << c
				<< " la do dai 3 canh cua 1 tam giac can";
			break;
		case 3:
			cout << endl << a << ", " << b << ", " << c
				<< " la do dai 3 canh cua 1 tam giac vuong";
			break;
		case 4:
			cout << endl << a << ", " << b << ", " << c
				<< " la do dai 3 canh cua 1 tam giac vuong can";
			break;
		case 5:
			cout << endl << a << ", " << b << ", " << c
				<< " la do dai 3 canh cua 1 tam giac thuong";
			break;
	}
}


