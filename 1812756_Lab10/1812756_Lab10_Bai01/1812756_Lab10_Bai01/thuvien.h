
#define TAB '\t'
typedef int *DayDong;

void NhapTuDong(DayDong a, int n);
void XuatMang(DayDong a, int n);

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


