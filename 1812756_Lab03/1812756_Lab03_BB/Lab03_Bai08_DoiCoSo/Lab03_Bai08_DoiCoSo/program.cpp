#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void Xuat(int so);
unsigned int TimLuyThua(unsigned int b, unsigned int n);
void DoiCoSo(unsigned int n, unsigned int b);

int main(int argc, const char **argv) {

	unsigned int n = 0, b = 0;

	cout << "\nNhap vao 1 so (he 10) : ";
	cin >> n;

	while (b < 2 || b > 16) {
		cout << "\nNhap vao co so b = [2..16] : ";
		cin >> b;
	}

	DoiCoSo(n, b);

	_getch();
	return 0;
}

/*
	Định nghĩa hàm XuatSo
	Input:
		so : 1 số nguyên
	Output
		Không. In ra màn hình ký tự tương ứng với so > 9
*/
void Xuat(int so) {
	switch (so) {
	case 0:
		cout << '0';
		break;
	case 1:
		cout << '1';
		break;
	case 2:
		cout << '2';
		break;
	case 3:
		cout << '3';
		break;
	case 4:
		cout << '4';
		break;
	case 5:
		cout << '5';
		break;
	case 6:
		cout << '6';
		break;
	case 7:
		cout << '7';
		break;
	case 8:
		cout << '8';
		break;
	case 9:
		cout << '9';
		break;
	case 10:
		cout << 'A';
		break;
	case 11:
		cout << 'B';
		break;
	case 12:
		cout << 'C';
		break;
	case 13:
		cout << 'D';
		break;
	case 14:
		cout << 'E';
		break;
	case 15:
		cout << 'F';
		break;
	}
}

/*
	Định nghĩa hàm Tìm lũy thừa để tìm số nguyên lớn nhất
	hoặc nhỏ hơn hoặc bằng n và là lũy thừa của b
	Input:
		n : số nguyên > 0
		b : cơ số >= 2 && <= 17
	Output:
		Số nguyên thỏa điều kiện
*/
unsigned int TimLuyThua(unsigned int b, unsigned int n) {
	int result = 0;
	int i = 0;
	while (pow(b, i) <= n) {
		result = pow(b, i);
		i++;
	}

	return result;
}

/*
	Định nghĩa hàm đổi cơ số
	Input: 
		n : số nguyên lớn hơn 0
		b : cơ số >= 2 và <= 16
	Output:
		Không. 
*/
void DoiCoSo(unsigned int n, unsigned int b) {
	int so = 0;
	int v = TimLuyThua(b, n);

	while (1) {
		if (n < v)
			Xuat(0);
		else {
			so = n / v;
			Xuat(so);
			n = n - so * v;
		}
		v = v / b;
		if (v <= 0)
			break;
	}
}








