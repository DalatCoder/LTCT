#include <iostream>
#include <conio.h>
#include <iomanip>

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
	int soMenu = 5, menu, n;
	int *matrix;

	do
	{
		cout << "\nNhap so luong phan tu cua ma tran: ";
		cin >> n;
	} while (n <= 0);

	matrix = new int[n*n];

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, matrix, n);
	} while (menu > 0);

	delete[] matrix;
}

