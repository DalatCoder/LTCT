#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
int Tong_GT_PhanBiet(DaySo a, int n);
int TinhTong(DaySo a, int n);
int Tong_GT_PhanBiet(DaySo a, int n);
int TinhMin(DaySo a, int n);
int DemSoLanXuatHien_Min(DaySo a, int n);
int TinhMax(DaySo a, int n);
void Xoa_1_PhanTu(DaySo a, int &n, int vt);
void Xoa_TatCa_PhanTu(DaySo a, int &n);
void SapXep(DaySo a, int n);

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

	for (i = 0; i < n; i++)
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

int DemSoLanXuatHien_Min(DaySo a, int n)
{
	int min = TinhMin(a, n);
	int i, dem = 0;
	
	for (i = 0; i < n; i++)
		if (a[i] == min)
			dem++;

	return dem;
}

int TinhMax(DaySo a, int n)
{
	int i, max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

/*
	Input: 
		- Day so a
		- So luong phan tu n
		- Vi tri cua phan tu can xoa
*/
void Xoa_1_PhanTu(DaySo a, int &n, int vt)
{
	int i;
	for (i = vt; i < n - 1; i++)
		a[i] = a[i + 1];
	n = n - 1;
}

void Xoa_TatCa_PhanTu(DaySo a, int &n)
{
	int i, max;

	max = TinhMax(a, n);
	for (i = 0; i < n; i++)
		if (a[i] == max)
		{
			Xoa_1_PhanTu(a, n, i);
			i--;
		}
}

void SapXep(DaySo a, int n)
{
	int i, j, mc;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			mc = (a[i] < 0 && a[j] < 0 && a[i] < a[j]) ||
				(a[i] == 0 && a[j] < 0) ||
				(a[i] > 0 && a[j] < 0) ||
				(a[i] > 0 && a[j] > 0 && a[i] > a[j]);
			if (mc)
			{
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}






