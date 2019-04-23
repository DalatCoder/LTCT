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

void ChayChuongTrinh()
{
	int menu, soMenu = 11;
	String a;
	String b;

	do
	{
		system("cls");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, b);
	} while (menu > 0);
	
}

