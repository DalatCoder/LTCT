#define MAX 100

typedef char String[MAX];

void NhapChuoi(String str);
void XuatChuoi(String str);
int TinhChieuDai(String str);
void ChenX_DauChuoi(String str, char x);
void ChenX_CuoiChuoi(String str, char x);
void ChenX_VT_BatKy(String str, char x, int vt);

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
	for (int i = len + 1; i > 0; i--)
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





