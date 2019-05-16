
#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

#include "Thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int n;
	NhanVien ds[MAX];
	char filename[MAX];

	cout << "\nNhap ten file de mo: ";
	cin >> filename;

	int dau = 0;
	for (int i = 0; filename[i] != NULL; i++)
		if (filename[i] == '.')
		{
			dau = 1;
			break;
		}
	if (!dau)
		strcat_s(filename, ".txt");
	
	Read_Struct(filename, ds, n);

	cout << "\nDu lieu tu tep: \n";
	Xuat_NV(ds, n);

	_getch();
}
