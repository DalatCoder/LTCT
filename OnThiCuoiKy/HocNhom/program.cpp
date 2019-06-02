
#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <string.h>

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
	NhanVien a[MAX];
	int n; // so luong nhan vien hien tai dang co trong mang
	int soMenu = 4, menu;
	
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

}
