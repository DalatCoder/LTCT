
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
	int soMenu = 6, menu;
	int *arr, n;
	arr = new int[MAX];

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, arr, n);
	} while (menu > 0);

	delete[] arr;
}

















