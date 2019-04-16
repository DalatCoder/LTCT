#define SIZE 10

typedef int MaTranVuong[SIZE][SIZE];

void NhapMaTran(MaTranVuong a, int n, char kt);
void XuatMaTran(MaTranVuong a, int n);

void NhapMaTran(MaTranVuong a, int n, char kt)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "\n" << kt << "[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << endl << endl;
		for (j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
	}
}



