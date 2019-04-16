#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#include "Thuvien.h"

int main()
{

	MaTranVuong a;
	int n;

	do
	{
		cout << "\nNhap kich thuoc ma tran (0.." << SIZE - 1 << ") : ";
		cin >> n;
	} while (n < 0 || n >= SIZE);

	cout << "\nMa tran ngau nhien :\n";
	NhapMaTran_TD(a, n);
	XuatMaTran(a, n);

	cout << "\nCac cap gia tri S | T\n";
	Xuat_S_T(a, n);

	_getch();
	return 0;
}

