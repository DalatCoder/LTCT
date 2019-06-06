#include <iostream>
#include <fstream>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int n;
	int soMenu = 5, menu;
	NhanVien a[MAX];
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a ,n);
	} while (menu > 0);
}
