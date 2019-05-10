
#define MAX 100

typedef char *ChuoiDong;

void NhapChuoi(ChuoiDong a);
void XuatChuoi(ChuoiDong a);
int TinhChieuDaiChuoi(ChuoiDong a);

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



