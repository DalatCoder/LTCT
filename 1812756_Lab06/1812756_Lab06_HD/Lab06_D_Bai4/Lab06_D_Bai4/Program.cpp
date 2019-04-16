#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#include "Thuvien.h"

int main()
{
	MaTranVuong a;
	int n = 5;
	NhapMaTran(a, n, 'A');
	XuatMaTran(a, n);
	_getch();
	return 0;
}