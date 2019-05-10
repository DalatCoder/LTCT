
typedef int *MaTranVuong;

void NhapMaTran_ThuCong(MaTranVuong &a, int n, char kt);
void NhapMaTran_TuDong(int *maTran, int n);
void XuatMaTran(MaTranVuong a, int n);

void NhapMaTran_ThuCong(MaTranVuong &a, int n, char kt)
{
	int i, j;
	for (i = 0; i < n;i++)
		for (j = 0; j < n; j++)
		{
			cout << endl << kt << "[" << i << "][" << j << "] = ";
			cin >> *(a + i*n + j);
		}
}

void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << endl << endl;
		for (j = 0; j < n; j++)
			cout << setw(4) << *(a + i*n + j);
	}
}

void NhapMaTran_TuDong(int *maTran, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(maTran + i*n + j) = rand() % 10;
}

