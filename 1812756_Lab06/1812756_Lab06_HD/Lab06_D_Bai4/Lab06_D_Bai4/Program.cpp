#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#include "Thuvien.h"

int main()
{
	MaTranVuong a, b, c;
	int n;

	do
	{
		cout << "\nNhap vao so nguyen duong n (0.." << SIZE - 1 << ") : ";
		cin >> n;
	} while (n < 0 || n >= SIZE);

	cout << "\n\nTao ngau nhien ma tran A:";
	NhapMaTran_TD(a, n);
	XuatMaTran(a, n);


	cout << "\n\nTao ngau nhien ma tran B:";
	NhapMaTran_TD(b, n);
	XuatMaTran(b, n);

	cout << "\n\nTong ma tran a va ma tran b:";
	TinhTong_2_MaTran(a, b, c, n);
	XuatMaTran(c, n);

	cout << "\n\nHieu ma tran a va ma tran b:";
	TinhHieu_2_MaTran(a, b, c, n);
	XuatMaTran(c, n);

	cout << "\n\nTich ma tran a va ma tran b:";
	TinhTich_2_MaTran(a, b, c, n);
	XuatMaTran(c, n);

	_getch();
	return 0;
}