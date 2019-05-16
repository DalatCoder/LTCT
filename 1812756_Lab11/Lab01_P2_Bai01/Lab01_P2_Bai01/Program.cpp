
#include <iostream>
#include <conio.h>
#include <fstream>

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
	int n, a[MAX];
	char filename[MAX];

	system("cls");
	cout << "Nhap ten file mo de doc: ";
	cin >> filename;

	// Them duoi .txt vao sau filename
	int dau = 0;
	for (int i = 0; filename[i] != NULL; i++)
		if (filename[i] == '.')
		{
			dau = 1;
			break;
		}
	if (!dau)
		strcat_s(filename, ".txt");

	File_Array(filename, a, n);
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
	_getch();
}



