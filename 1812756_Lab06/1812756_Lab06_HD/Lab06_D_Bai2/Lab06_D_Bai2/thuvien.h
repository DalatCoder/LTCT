#define SIZE 10
#define TAB '\t'

void NhapTuDong(int a[SIZE][SIZE], int m, int n);
void XuatMaTran(int a[SIZE][SIZE], int m, int n);
int Tinh_Max_MaTran(int a[SIZE][SIZE], int m, int n);
int Tinh_Max_Hang_i(int a[SIZE][SIZE], int i, int n);
int Tinh_Tong_Hang_i(int a[SIZE][SIZE], int i, int n);
int Tinh_Min_Cot_j(int a[SIZE][SIZE], int m, int j);
int Tinh_Tich_Cot_j(int a[SIZE][SIZE], int m, int j);

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

int Tinh_Tong_Hang_i(int a[SIZE][SIZE], int i, int n)
{
	int j, sum = 0;
	for (j = 0; j < n; j++)
		sum += a[i][j];
	return sum;
}

int Tinh_Min_Cot_j(int a[SIZE][SIZE], int m, int j)
{
	int minj, i;
	minj = a[0][j];
	for (i = 1; i < m; i++)
		if (minj > a[i][j])
			minj = a[i][j];
	return minj;
}

int Tinh_Tich_Cot_j(int a[SIZE][SIZE], int m, int j)
{
	int p, i;
	p = 1;
	for (i = 0; i < m; i++)
		p *= a[i][j];
	return p;
}

void MaxHang_MinCot(int a[SIZE][SIZE], int m, int n)
{
	int i, j;
	int dau = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] == Tinh_Max_Hang_i(a, i, n) && a[i][j] == Tinh_Min_Cot_j(a, m, j))
			{
				dau = 1;
				break;
			}
	if (!dau)
		cout << "\nKhong co phan tu nao thoa dieu kien bai toan.";
	else
	{
		cout << "\nCac phan tu a[i][j] thoa: Max hang i va Min cot j : \n";
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				if (a[i][j] == Tinh_Max_Hang_i(a, i, n) && a[i][j] == Tinh_Min_Cot_j(a, m, j))
					cout << "\na[" << i << "][" << j << "] = " << a[i][j]
					<< " : Max hang " << i << " va Min cot " << j;
	}
}


