#include <iostream>
#include <conio.h>

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
	char a[MAX];
	char thoat;
	do
	{
		system("cls");
		cout << "\nNhap xau ky tu: ";
		gets_s(a);
		system("cls");
		cout << "\nTen vua nhap: ";
		cout << a;
		NanTen(a);
		cout << "\nTen da nan: ";
		cout << a;
		cout << endl << "Nua khong ? go ESC neu khong:\n";
		thoat = _getch();
	} while (thoat != 27);
	_getch();
}


