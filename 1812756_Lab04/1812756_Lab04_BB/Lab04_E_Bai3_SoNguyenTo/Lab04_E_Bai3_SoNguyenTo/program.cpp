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
	int n, menu, soMenu = 5;
	do
	{
		cout << "\nNhap vao 1 so nguyen duong n : ";
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

