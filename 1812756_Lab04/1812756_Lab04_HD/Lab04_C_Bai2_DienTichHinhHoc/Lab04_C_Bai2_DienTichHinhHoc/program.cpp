#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{

	ChayChuongTrinh();

	// Dung chuong trinh va cho nguoi dung nhan vao 1 phim bat ky
	_getch();
	return 1;
}

/*
	Dinh nghia ham chay chuong trinh
*/
void ChayChuongTrinh()
{
	// Khai bao bien
	int menu,		// luu so thu tu menu duoc chon
		soMenu = 4; // luu so luong menu chuc nang

	// lap lai viec chon va xu ly menu cho toi khi
	// nguoi dung chon chuc nang 0. Thoat khoi chuong trinh
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}