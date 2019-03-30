#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	cout << TinhSin(1) << endl;
	cout << TinhCos(0) << endl;
	
	_getch();
	return 0;
}

void ChayChuongTrinh()
{
	int deg, menu, soMenu = 3;
	cout << "\nNhap vao do >> ";
	cin >> deg;


	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, deg);
	} while (menu > 0);

	cout << "\nCam on da su dung chuong trinh";
	_getch();
}
