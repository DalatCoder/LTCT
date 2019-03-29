// Chèn các thư viện có sẵn
#include <iostream>
#include <conio.h>

using namespace std;

// Chèn các tập tin thư viện
#include "menu.h"
#include "thuvien.h"

// Khai báo nguyên mẫu hàm
void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int menu,
		soMenu = 4;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
	_getch();
}



