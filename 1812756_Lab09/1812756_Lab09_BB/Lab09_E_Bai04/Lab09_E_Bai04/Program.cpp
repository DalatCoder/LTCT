
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{	
	int soMenu = 9, menu, n = 0;
	TaiLieu *ds;
	ds = new TaiLieu[MAX];
	Tao_DS_TaiLieu(ds, n);
	Xuat_1_TaiLieu(ds[0]);

	_getch();
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);

	delete[] ds;
}

