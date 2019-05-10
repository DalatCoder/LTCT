
#include <iostream>
#include <conio.h>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	//ChayChuongTrinh();
	for (int i = 0; i < 256; i++)
		cout << i << " - " << (char)i << endl;
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 6, menu;
	String str;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, str);
	} while (menu > 0);

}

