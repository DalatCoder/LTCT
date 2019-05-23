#include <iostream>
#include <conio.h>

using namespace std;

#include "1812756_Thuvien.h"
#include "1812756_Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 6, menu;
	unsigned int n;
	
	do
	{
		cout << "\nNhap vao 1 so nguyen duong ";
		cin >> n;
	} while (n <= 0);

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);

	cout << "\nCam on da su dung chuong trinh";
	_getch();
}
