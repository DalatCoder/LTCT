
#define TAB '\t'
typedef int *DayDong;

void NhapTuDong(DayDong a, int n);
void XuatMang(DayDong a, int n);
int TinhTong(DayDong a, int n);
int TinhTich(DayDong a, int n);
int TinhMin(DayDong a, int n);
int TinhMax(DayDong a, int n);
int TinhSo_DC(DayDong a, int n);

void NhapTuDong(DayDong a, int n)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		*(a + i) = -20 + rand() % 40;
}

void XuatMang(DayDong a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << *(a + i) << TAB;
}

int TinhTong(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = *a;
	else
		if (n > 1)
			kq = TinhTong(a, n - 1) + *(a + n - 1);
	return kq;
}

int TinhTich(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = *a;
	else
		if (n > 1)
			kq = *(a + n - 1) * TinhTich(a, n - 1);
	return kq;
}

int TinhMin(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = *(a + 0);
	else
		if (n > 1)
			if (TinhMin(a, n - 1) > *(a + n - 1))
				kq = *(a + n - 1);
			else
				kq = TinhMin(a, n - 1);
	return kq;
}

int TinhMax(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = *(a + 0);
	else
		if (n > 1)
			if (TinhMax(a, n - 1) < *(a + n - 1))
				kq = *(a + n - 1);
			else
				kq = TinhMax(a, n - 1);
	return kq;
}

int TinhSo_DC(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = 1;
	else
		if (n > 1)
			if (*(a + n - 1) < *(a + n - 2))
				kq = TinhSo_DC(a, n - 1) + 1;
			else
				kq = TinhSo_DC(a, n - 1);
	return kq;
}

int KiemTra_NT(int x)
{
	int i, m, kq;
	if (x < 2)
		kq = 0;
	else
	{
		m = (int)sqrt((double)x);
		kq = 1;
		for (i = 2; i <= m; i++)
			if (x % i == 0)
			{
				kq = 0;
				break;
			}
	}
	return kq;
}


