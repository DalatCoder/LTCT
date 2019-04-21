#include <iostream>
#include <conio.h>

using namespace std;

#include "1812756_Thuvien.h"
#include "1812756_Menu.h"

int main()
{

	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 5, menu, n;
	DaySo a;

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

	_getch();
}


