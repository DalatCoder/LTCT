#define SIZE 10
#define TAB '\t'

void NhapTuDong(int a[SIZE][SIZE], int m, int n)
{
	int i, j;
	srand((unsigned)time(NULL));
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			a[i][j] = (rand() % (m*n)) - (m*n) / 2;
}

void XuatMaTran(int a[SIZE][SIZE], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		cout << endl;
		for (j = 0; j < n; j++)
			cout << a[i][j] << TAB;
	}
}
