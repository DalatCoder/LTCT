
#define TAB '\t'
typedef int *DayDong;

void NhapTuDong(DayDong a, int n);
void XuatMang(DayDong a, int n);
int TinhTong(DayDong a, int n);
int TinhTich(DayDong a, int n);

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

