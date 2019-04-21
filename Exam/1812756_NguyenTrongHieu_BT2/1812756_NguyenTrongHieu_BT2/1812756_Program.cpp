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
	int soMenu = 5, menu, n;
	DaySo a;

	do
	{
		cout << "\nNhap vao kich thuoc cua mang : ";
		cin >> n;
	} while (n <= 0);

	NhapMang(a, n);

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}


