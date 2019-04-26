#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#include "1812756_Thuvien.h"

int main()
{
	int thang, nam;
	maTran lich;

	thang = NhapThang();
	nam = NhapNam();

	TaoLich(lich, thang, nam);
	XuatLich(lich, thang);

	return 0;
}

