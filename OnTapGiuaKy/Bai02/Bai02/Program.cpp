#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	char *a = new char[100];
	char *b = new char[100];

	b = gets_s(a, 100);

	cout << a << endl;
	cout << b << endl;

	delete[] a;
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 6, menu;
	char a[MAX];

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a);
	} while (menu > 0);

}