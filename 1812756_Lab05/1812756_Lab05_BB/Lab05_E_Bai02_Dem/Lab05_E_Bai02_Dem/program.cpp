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
	int soMenu = 7, menu, n;
	DaySo a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

	system("cls");
	cout << "\nCam on da su dung chuong trinh\n";
	_getch();
}


