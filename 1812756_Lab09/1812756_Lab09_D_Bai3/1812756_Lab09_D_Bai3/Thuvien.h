
#define MAX 100

typedef char *ChuoiDong;

void NhapChuoi(ChuoiDong a);
void XuatChuoi(ChuoiDong a);
int TinhChieuDaiChuoi(ChuoiDong a);
int ChenKT_VT(ChuoiDong a, char x, int vt);
int XoaKT_VT(ChuoiDong a, int vt);
void CatCuoiChenDau(ChuoiDong a);
void Xoa_X(ChuoiDong a, char x);

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

int XoaKT_VT(ChuoiDong a, int vt)
{
	int i, h, kq;
	h = TinhChieuDaiChuoi(a);
	if (vt < 0 || vt > h - 1)
		kq = 0;
	else
	{
		for (i = vt; i < h; i++)
			*(a + i) = *(a + i + 1);
		kq = 1;
	}
	return kq;
}

void CatCuoiChenDau(ChuoiDong a)
{
	int i, h;
	char x;
	h = TinhChieuDaiChuoi(a);
	x = *(a + h - 1);
	for (i = h - 2; i >= 0; i--)
		*(a + i + 1) = *(a + i);
	*(a + 0) = x;
}

void Xoa_X(ChuoiDong a, char x)
{
	int i, h = 0;
	for (i = 0; *(a+i) != NULL; i++)
		if (*(a + i) != x)
		{
			*(a + h) = *(a + i);
			h++;
		}
	*(a + h) = NULL;
}

