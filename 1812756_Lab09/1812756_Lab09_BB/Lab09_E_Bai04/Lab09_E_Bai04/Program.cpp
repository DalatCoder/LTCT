
#include <iostream>
#include <conio.h>

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

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);

	delete[] ds;
}

