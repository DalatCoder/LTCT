
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
	int *arr, n;
	do
	{
		cout << "\nNhap vao so luong phan tu cua mang : ";
		cin >> n;
	} while (n <= 0);
	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap vao phan tu thu " << i + 1 << " : ";
		cin >> arr[i];
	}

	char filename[MAX];
	cout << "\nNhap ten file de luu: ";
	cin >> filename;

	int dau = 0;
	for (int i = 0; filename[i] != NULL; i++)
		if (filename[i] == '.')
			dau = 1;
	if (!dau)
		strcat_s(filename, ".txt");

	Write_Int(arr, n, filename);

	_getch();
	delete[] arr;
}



