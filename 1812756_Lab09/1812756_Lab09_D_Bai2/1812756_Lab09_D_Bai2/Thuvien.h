
typedef int *MaTranVuong;

void NhapMaTran_ThuCong(MaTranVuong &a, int n, char kt);
void TaoMaTran_TuDong(int *a, int n);
void XuatMaTran(MaTranVuong a, int n);
int* TinhTong_2_MaTran(int *a, int *b, int n);
int* TinhHieu_2_MaTran(int *a, int *b, int n);
int* TinhTich_2_MaTran(int *a, int *b, int n);

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

void TaoMaTran_TuDong(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(a + i*n + j) = rand() % 10;
}

int* TinhTong_2_MaTran(int *a, int *b, int n)
{
	int i, j;
	int *c;
	c = new int[n*n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(c + i*n + j) = *(a + i*n + j) + *(b + i*n + j);
	return c;
}

int* TinhHieu_2_MaTran(int *a, int *b, int n)
{
	int i, j;
	int *c;
	c = new int[n*n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(c + i*n + j) = *(a + i*n + j) - *(b + i*n + j);
	return c;
}

int* TinhTich_2_MaTran(int *a, int *b, int n)
{
	int *c;
	int i, j, k;
	c = new int[n*n];
	for (i = 0; i < n;i++)
		for (j = 0; j < n; j++)
		{
			*(c + i*n + j) = 0;
			for (k = 0; k < n; k++)
				*(c + i*n + j) += *(a + i*n + k) * *(b + k*n + j);
		}

	return c;
}








