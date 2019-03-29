#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void XuatUC(int m, int n);
int  TimUCLN(int m, int n);
int  TimBCNN(int m, int n);

int main()
{

	int m = 12, n = 16;

	XuatUC(m, n);
	cout << "\nUCLN cua " << m << " va " << n << " la : " << TimUCLN(m, n);
	cout << "\nBCNN cua " << m << " va " << n << " la : " << TimBCNN(m, n);

	_getch();
	return 0;
}

int max(int m, int n)
{
	return m > n ? m : n;
}

void XuatUC(int m, int n)
{
	cout << "\nCac uoc chung cua " << m << " va " << n << " la: ";
	int mid = max(m, n);
	for (int i = 1; i <= mid / 2; i++)
		if (m % i == 0)
			if (n % i == 0)
				cout << i << "\t";
	cout << endl;
}

int TimUCLN(int m, int n)
{
	int UCLN;

	m = abs(m);
	n = abs(n);

	if (m == 0 || n == 0)
		return m + n;

	while (m != n)
	{
		if (m > n)
			m -= n;
		else
			n -= m;
	}

	UCLN = m;

	return UCLN;
}

int TimBCNN(int m, int n)
{
	return (m * n) / TimUCLN(m, n);
}