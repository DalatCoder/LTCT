#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"

int main()
{
	int n, *arr;

	arr = TaoMang(n);
	cout << "\nMang vua nhap la: \n";
	XuatMang(arr, n);
	XuatGiaTri_SoLan_PhanBiet(arr, n);
	delete[] arr;

	_getch();
	return 0;
}

