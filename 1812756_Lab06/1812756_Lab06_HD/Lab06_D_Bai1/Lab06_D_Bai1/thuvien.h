
#define SIZE 10
#define TAB '\t'

typedef int MaTranVuong[SIZE][SIZE];

void NhapMaTran(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
int TinhTong_MaTran(MaTranVuong a, int n);
void XuatDuongCheoChinh(MaTranVuong a, int n);
void XuatDuongCheoPhu(MaTranVuong a, int n);
int TinhTong_Tren_CheoChinh(MaTranVuong a, int n);
int TinhTich_Duoi_CheoPhu(MaTranVuong a, int n);
void Xuat_DuongCheo_SS_DCChinh(MaTranVuong a, int n);
void Xuat_DuongCheo_SS_DCPhu(MaTranVuong a, int n);

void NhapMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\na[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << a[i][j] << TAB;
	}
}

int TinhTong_MaTran(MaTranVuong a, int n)
{
	int i, j, sum = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			sum += a[i][j];
	return sum;
}

void XuatDuongCheoChinh(MaTranVuong a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i][i] << TAB;
}

void XuatDuongCheoPhu(MaTranVuong a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i][n - i - 1] << TAB;
}

int TinhTong_Tren_CheoChinh(MaTranVuong a, int n)
{
	int i, j, sum = 0;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			sum += a[i][j];
	return sum;
}

int TinhTich_Duoi_CheoPhu(MaTranVuong a, int n)
{
	int i, j, p = 1;
	for (i = 1; i < n; i++)
		for (j = n - i; j < n; j--)
			p *= a[i][j];
	return p;
}

void Xuat_DuongCheo_SS_DCChinh(MaTranVuong a, int n)
{
	int i, j, k;
	cout << "\nCac duong cheo phia tren duong cheo chinh:\n";
	for (k = n - 1; k >= 1; k--)
	{
		cout << "\nDuong cheo thu " << k << ":\t";
		for (i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++)
				if (j - i == k)
					cout << a[i][j] << TAB;
	}

	cout << "\n\nCac duong cheo phia duoi duong cheo chinh:\n";
	for (k = n - 1; k >= 1; k--)
	{
		cout << "\nDuong cheo thu " << k << ":\t";
		for (i = 1; i < n; i++)
			for (j = 0; j < i; j++)
				if (i - j == k)
					cout << a[i][j] << TAB;
	}
}

void Xuat_DuongCheo_SS_DCPhu(MaTranVuong a, int n)
{
	int i, j, k;
	cout << "\n\nCac duong cheo nam ben trai duong cheo phu:\n";
	for (k = 0; k < n - 1; k++)
	{
		cout << "\nDuong cheo thu " << k + 1 << " : ";
		for (i = 0; i < n - 1; i++)
			for (j = 0; j < n - 1 - i; j++)
				if (j + i == k)
					cout << a[i][j] << TAB;
	}

	cout << "\n\nCac duong cheo nam ben phai duong cheo phu:\n";
	for (k = n; k < 2 * n - 1; k++)
	{
		cout << "\nDuong cheo thu " << k - n + 1 << " : ";
		for (i = 1; i < n; i++)
			for (j = n - i; j < n; j++)
				if (j + i == k)
					cout << a[i][j] << TAB;
	}
}

