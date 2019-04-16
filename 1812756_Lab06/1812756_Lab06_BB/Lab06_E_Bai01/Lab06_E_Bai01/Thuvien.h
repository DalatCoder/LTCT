#define SIZE 10

typedef double MaTranVuong[SIZE][SIZE];

void NhapMaTran_TD(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
void NhapMaTran(MaTranVuong a, int n);
double SoDuongNhoNhat_Hang(MaTranVuong a, int n, int i);
double SoAmLonNhat_Cot(MaTranVuong a, int n, int j);
void Xuat_S_T(MaTranVuong a, int n);

double fRand(double fMin, double fMax)
{
	double f = (double)rand() / RAND_MAX;
	return fMin + f * (fMax - fMin);
}

void NhapMaTran_TD(MaTranVuong a, int n)
{
	srand((unsigned)time(NULL));
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = fRand(-10.0, 10.0);
}

void NhapMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
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
			cout << setw(7) << setprecision(3) << a[i][j];
	}
	cout << "\n";
}

double SoDuongNhoNhat_Hang(MaTranVuong a, int n, int i)
{
	double kq = -1.0;
	int j;

	for (j = 0; j < n; j++)
		if (a[i][j] > 0)
		{
			kq = a[i][j];
			break;
		}

	for (j; j < n; j++)
		if (a[i][j] > 0 && kq > a[i][j])
			kq = a[i][j];

	return kq;
}

double SoAmLonNhat_Cot(MaTranVuong a, int n, int j)
{
	double kq = 1.0;
	int i;

	for (i = 0; i < n; i++)
		if (a[i][j] < 0)
		{
			kq = a[i][j];
			break;
		}

	for (i; i < n; i++)
		if (a[i][j] < 0 && kq < a[i][j])
			kq = a[i][j];

	return kq;
}

void Xuat_S_T(MaTranVuong a, int n)
{
	int i, j;
	double max, min;
	for (i = 0; i < n; i++)
	{
		cout << "\n";
		max = SoDuongNhoNhat_Hang(a, n, i);
		for (j = 0; j < n; j++)
		{
			min = SoAmLonNhat_Cot(a, n, j);
			cout << setw(10) << setprecision(3);
			max == -1.0 ? cout << "Khong" : cout << max;
			cout << " | ";
			min == 1.0 ? cout << "Khong" : cout << min;
		}
	}
}

