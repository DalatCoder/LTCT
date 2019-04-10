#include <iostream>
#include <conio.h>

using namespace std;

#include "1812756_thuvien.h"
#include "1812756_menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 6,
		menu, n;
	DaySo a;

	do
	{
		cout << "\nNhap vao so luong phan tu trong mang : ";
		cin >> n;
	} while (n < 0 || n >= MAX);

	cout << "\nNhap cac phan tu trong day so:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

	_getch();
}
