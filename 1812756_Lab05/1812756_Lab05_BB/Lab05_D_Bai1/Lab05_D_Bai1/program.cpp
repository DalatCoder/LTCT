#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>

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
	int soMenu = 8, menu, n = 0;
	DaySo a;
	
	do
	{
		cout << "\nNhap vao 1 so nguyen duong >> ";
		cin >> n;
	} while (n <= 0);
	NhapTuDong(a, n);

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

	cout << "\nCam on da su dung chuong trinh";
	_getch();
}
