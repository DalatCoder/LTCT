#include <iostream>
#include <conio.h>
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
	int menu, soMenu = 9, n = 18;
	SinhVien sv[MAX] =
	{
		{ "1534507", "Duong", "Qua", 1997, "CTK39", 9.0, "" },
		{ "1405507", "Tu Ma Ngoc", "Yen", 1996, "CTK38", 6.5, "" },
		{ "1334067", "Quach", "Tinh", 1996, "CTK37", 8.0, "" },
		{ "1300167", "Hoang", "Dung", 1995, "CTK37", 7.2, "" },
		{ "1534507", "Lam", "Xung", 1997, "CTK39", 4.0, "" },

		{ "1405507", "Hoang", "Dung", 1996, "CTK38", 8.5, "" },
		{ "1334067", "Vuong Ngu", "Yen", 1995, "CTK37", 7.0, "" },
		{ "1334167", "Lenh Ho", "Xung", 1995, "CTK37", 5.6, "" },
		{ "1530070", "Trieu", "Minh", 1997, "CTK39", 3.0, "" },
		{ "1534123", "Nhac", "Dung", 1997, "CTK39", 2.0, "" },

		{ "1534456", "Ha Thai", "Xung", 1997, "CTK39", 6.0, "" },
		{ "1512307", "Vy Tieu", "Bao", 1997, "CTK39", 5.0, "" },
		{ "1400067", "Chau Ba", "Thong", 1996, "CTK38", 6.5, "" },
		{ "1530000", "Cong Tang Ton Nu Thu", "Huong", 1997, "CTK39", 8.0, "" },
		{ "1401234", "Ton That", "Du", 1996, "CTK38", 9.5, "" },

		{ "1434167", "Doan", "Du", 1996, "CTK38", 5.6, "" },
		{ "1333217", "Hoang Trong", "Yen", 1995, "CTK37", 7.0, "" },
		{ "1531117", "Au Duong", "Phong", 1997, "CTK37", 5.5, "" },
	};

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, sv, n);
	} while (menu > 0);

}






