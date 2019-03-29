#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{

	ChayChuongTrinh();

	return 0;
}

/*
	Dinh nghia ham chay chuong trinh
	Input: khong
	Output: khong
*/
void ChayChuongTrinh()
{
	int soMenu = 8,
		menu;

	unsigned int n;
	cout << "\nNhap vao 1 so nguyen duong n: ";
	cin >> n;

	do
	{
		menu = ChonMenu(soMenu, n);
		XuLyMenu(menu, n);
	} while (menu > 0);

	cout << "\nCam on da su dung chuong trinh";
	_getch();
}

