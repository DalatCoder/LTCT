
#define MAX 100

typedef char *ChuoiDong;

void NhapChuoi(ChuoiDong a);
void XuatChuoi(ChuoiDong a);
int TinhChieuDaiChuoi(ChuoiDong a);
int ChenKT_VT(ChuoiDong a, char x, int vt);

void NhapChuoi(ChuoiDong a)
{
	cout << "\nNhap chuoi: ";
	cin.ignore(MAX, '\n');
	gets_s(a, MAX);
}

void XuatChuoi(ChuoiDong a)
{
	cout << "\n" << a;
}

int TinhChieuDaiChuoi(ChuoiDong a)
{
	int i = 0;
	while (*(a + i) != NULL)
		i++;
	return i;
}

int ChenKT_VT(ChuoiDong a, char x, int vt)
{
	int i, h, kq;
	h = TinhChieuDaiChuoi(a);
	if (vt < 0 || vt > h)
		kq = 0;
	else
	{
		for (i = h; i >= vt; i--)
			*(a + i + 1) = *(a + i);
		*(a + vt) = x;
		kq = 1;
	}
	return kq;
}



