#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

void Test(int &n)
{
	cout << "Dia chi trong ham TEST: " << n << endl;
	//cout << "n trong ham TEST co gia tri: " << n << endl;
	//cout << "\nDia chi cua n trong ham TEST " << &n << endl;
}

int main()
{
	int n = 10;
	int *p = &n;

	cout << "\nDia chi cua n trong main: " << &n << endl;
	cout << "\nDia chi cua con tro p: " << p << endl;
	Test(n);

	//cout << "\nn trong main co gia tri : " << n << endl;

	//*p = 50;
	//cout << "\nn trong main co gia tri: " << n << endl;

	//Test(n);
	//cout << "\nn trong main co gia tri: " << n << endl;


	// cout << "\nn trong ham main co gia tri: " << n << endl;
	//cout << "Dia chi cua bien n trong ham main " << &n << endl;
	//Test(n);
	// cout << "\nn trong ham main co gia tri: " << n << endl;
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 6, menu, n = 0;
	SinhVien *a;
	a = new SinhVien[MAX];
	do
	{
		system("cls");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}

