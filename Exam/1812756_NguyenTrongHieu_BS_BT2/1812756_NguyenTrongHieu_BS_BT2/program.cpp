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
	XuatLich_T2(lich, thang);

	cout << endl;
	XuatLich_CN(lich, thang);

	return 0;
}

