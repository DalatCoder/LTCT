
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
	File_Array(filename, a, n);
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
	_getch();
}



