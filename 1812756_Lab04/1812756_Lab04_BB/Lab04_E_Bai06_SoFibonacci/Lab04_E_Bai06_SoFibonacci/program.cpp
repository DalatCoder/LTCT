#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	_getch();
	return 0;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 3, n;
	do
	{
		cout << "\nNhap vao 1 so nguyen duong >> ";
		cin >> n;
	} while (n < 0);
	do
	{
		menu = ChonMenu(soMenu, n);
		XuLyMenu(menu, n);
	} while (menu > 0);

	cout << "\nCam on da su dung chuong trinh";
	_getch();
}
