#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

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
	int soMenu = 8,
		menu,
		m = 0,
		n = 0;
	int a[SIZE][SIZE];
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, m, n);
	} while (menu > 0);

	_getch();
}
