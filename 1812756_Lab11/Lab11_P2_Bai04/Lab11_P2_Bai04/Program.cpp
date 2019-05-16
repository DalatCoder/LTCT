
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
	int n, a[MAX][MAX], i, j;
	char filename[MAX];
	system("cls");
	cout << "\nNhap ten file mo de doc: ";
	cin >> filename;

	int dau = 0;
	for (i = 0; filename[i] != NULL; i++)
		if (filename[i] == '.')
		{
			dau = 1;
			break;
		}
	if (!dau)
		strcat_s(filename, ".txt");

	File_Mat(filename, a, n);
	cout << "\nn = " << n;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		cout << '\n';
		for (j = 0; j < n; j++)
			cout << a[i][j] << '\t';
	}

	_getch();
}