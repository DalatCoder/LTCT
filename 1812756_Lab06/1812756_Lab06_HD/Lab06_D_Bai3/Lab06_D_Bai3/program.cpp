#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#include "thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	char kt;
	int a[MAX][MAX], n;
	do
	{
		system("cls");
		cout << "\nNhap n = ";
		cin >> n;
		Tao_MaTran_XoanOc(a, n);
		system("cls");
		cout << "\nTao ma tran xoan oc cap " << n << " : ";
		XuatMaTran(a, n);
		_getch();
		cout << "\n\nNua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
	_getch();
}


