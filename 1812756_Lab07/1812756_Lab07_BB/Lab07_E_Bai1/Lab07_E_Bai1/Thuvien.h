#define MAX 100

typedef char String[MAX];

void NhapChuoi(String str);
void XuatChuoi(String str);
int TinhChieuDai(String str);
void ChenX_DauChuoi(String str, char x);
void ChenX_CuoiChuoi(String str, char x);
void ChenX_VT_BatKy(String str, char x, int vt);
void Xoa_DauChuoi(String str);
void Xoa_CuoiChuoi(String str);
void Xoa_VT_BatKy(String str, int vt);
void CatDau_ChenCuoi(String str);
void CatCuoi_ChenDau(String str);
void XoaTatCa_X(String str, char x);
void ThayThe_X_Y(String str, char x, char y);

void NhapChuoi(String str)
{
	cout << "\nNhap chuoi: ";
	cin.ignore(MAX, '\n');
	gets_s(str, MAX);
}

void XuatChuoi(String str)
{
	cout << "\n" << str;
}

int TinhChieuDai(String str)
{
	int kq = 0;

	for (int i = 0; str[i] != '\0'; i++)
		kq++;

	return kq;
}

void ChenX_DauChuoi(String str, char x)
{
	int len, i;
	len = TinhChieuDai(str);
	for (i = len + 1; i > 0; i--)
		str[i] = str[i - 1];
	str[0] = x;
}

void ChenX_CuoiChuoi(String str, char x)
{
	int len;
	len = TinhChieuDai(str);
	str[len] = x;
	str[len + 1] = '\0';
}

void ChenX_VT_BatKy(String str, char x, int vt)
{
	int len, i;
	len = TinhChieuDai(str);

	for (i = len; i > vt; i--)
		str[i] = str[i - 1];
	str[len + 1] = '\0';
	str[vt] = x;
}

void Xoa_DauChuoi(String str)
{
	int len, i;
	len = TinhChieuDai(str);
	for (i = 0; i < len; i++)
		str[i] = str[i + 1];
}

void Xoa_CuoiChuoi(String str)
{
	int len;
	len = TinhChieuDai(str);
	if (len > 0)
		str[len - 1] = '\0';
}

void Xoa_VT_BatKy(String str, int vt)
{
	int len, i;
	len = TinhChieuDai(str);

	for (i = vt; i < len; i++)
		str[i] = str[i + 1];
}

void CatDau_ChenCuoi(String str)
{
	int len, i;
	char ch;

	len = TinhChieuDai(str);
	ch = str[0];

	for (i = 0; i < len; i++)
		str[i] = str[i + 1];
	str[len - 1] = ch;
}

void CatCuoi_ChenDau(String str)
{
	int len, i, ch;

	len = TinhChieuDai(str);
	ch = str[len - 1];

	for (i = len - 1; i > 0; i--)
		str[i] = str[i - 1];

	str[0] = ch;
}

void XoaTatCa_X(String str, char x)
{
	int len, i;
	len = TinhChieuDai(str);

	for (i = 0; i < len; i++)
		if (str[i] == x)
		{
			Xoa_VT_BatKy(str, i);
			i--;
		}
}

void ThayThe_X_Y(String str, char x, char y)
{
	int len, i;
	len = TinhChieuDai(str);

	for (i = 0; i < len; i++)
		if (str[i] == x)
			str[i] = y;
}

