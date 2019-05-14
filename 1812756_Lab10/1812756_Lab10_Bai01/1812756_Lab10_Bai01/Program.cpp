
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

#include "thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 9,
		menu,
		n;
	DayDong a;

	do
	{
		cout << "\nNhap vao so phan tu cua day: ";
		cin >> n;
	} while (n <= 0);

	a = new int[n];
	
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

	delete[] a;
}

