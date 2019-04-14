#define SIZE 10
#define TAB '\t'

void NhapTuDong(int a[SIZE][SIZE], int m, int n);
void XuatMaTran(int a[SIZE][SIZE], int m, int n);
int Tinh_Max_MaTran(int a[SIZE][SIZE], int m, int n);
int Tinh_Max_Hang_i(int a[SIZE][SIZE], int i, int n);

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

int Tinh_Max_MaTran(int a[SIZE][SIZE], int m, int n)
{
	int max, i, j;
	max = a[0][0];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (max < a[i][j])
				max = a[i][j];
	return max;
}

int Tinh_Max_Hang_i(int a[SIZE][SIZE], int i, int n)
{
	int maxi, j;
	maxi = a[i][0];
	for (j = 1; j < n; j++)
		if (maxi < a[i][j])
			maxi = a[i][j];
	return maxi;
}

