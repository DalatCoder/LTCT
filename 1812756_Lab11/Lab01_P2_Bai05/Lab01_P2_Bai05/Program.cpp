
#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdlib>
#include <ctime>

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
	int n, a[MAX][MAX];	
	char filename[MAX];

	do
	{
		cout << "\nNhap cap cua ma tran: ";
		cin >> n;
	} while (n <= 0);

	cout << "\nTao ma tran ngau nhien ...";
	TaoMaTranNgauNhien(a, n);

	cout << "\nNhap vao ten file de luu: ";
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

	Mat_File(filename, a, n);

	_getch();
}