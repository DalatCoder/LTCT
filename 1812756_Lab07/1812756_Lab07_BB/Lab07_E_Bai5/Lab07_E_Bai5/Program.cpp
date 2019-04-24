// Chuyen xau ky tu thanh gia tri so tuong ung

#include <iostream>
#include <conio.h>

#define MAX 100

using namespace std;

int ChuyenDoi(char a[MAX]);

int main()
{
	char a[MAX] = "1234567";
	int kq = ChuyenDoi(a);
	cout << kq + 1<< endl;
	return 0;
}

int ChuyenDoi(char a[MAX])
{
	int kq = 1;

	kq = atoi(a);

	return kq;
}


