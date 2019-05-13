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
	int soMenu = 5, menu;
	String a;

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a);
	} while (menu > 0);

}