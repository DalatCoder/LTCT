#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int menu, n;
	do
	{
		cout << "\nNhap vao 1 so nguyen duong n : ";
		cin >> n;
	} while (n < 0);

	do
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap tuy chon menu tuong ung : ";
		cin >> menu;
		XuLyMenu(menu, n);
	} while (menu > 0);

	cout << "\nCam on da dung chuong trinh";
	_getch();
}


