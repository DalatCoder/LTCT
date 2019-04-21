#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
int Tong_GT_PhanBiet(DaySo a, int n);
int TinhTong(DaySo a, int n);

void NhapMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

int TinhTong(DaySo a, int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int Tong_GT_PhanBiet(DaySo a, int n)
{
	DaySo b;
	int i, j, m = 0, dau;

	for (i = 1; i < n; i++)
	{
		dau = true;
		for (j = 0; j < m; j++)
		{
			if (a[i] == b[j])
				dau = false;
		}
		if (dau)
		{
			b[m] = a[i];
			m++;
		}
	}
	return TinhTong(b, m);
}

int TinhMin(DaySo a, int n)
{
	int i, min = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}









