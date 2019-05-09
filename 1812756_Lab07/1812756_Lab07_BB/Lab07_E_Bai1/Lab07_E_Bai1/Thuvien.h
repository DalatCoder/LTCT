#define MAX 100

typedef char String[MAX];

void NhapChuoi(String str);
void XuatChuoi(String str);
int TinhChieuDai(String str);
void ChenX_DauChuoi(String str, char x);

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






