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
	// Khai bao bien
	int menu,		// luu so thu tu menu duoc chon
		soMenu = 3; // luu so luong menu chuc nang
	unsigned int n;

	// Nhap gia tri cho bien n
	cout << endl << "Nhap mot so nguyen duong: ";
	cin >> n;

	// Lap lai viec chon va xu ly menu cho toi khi 
	// nguoi dung chon chuc nang 0. Thoat khoi chuong trinh
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);
}
