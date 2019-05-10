
#define MAX 100

typedef char String[MAX];

void NhapChuoi(String str);
void XuatChuoi(String str);
void Chuyen_KT_thuong(String str);

void NhapChuoi(String str)
{
	cout << "\nNhap vao chuoi: ";
	cin.ignore(MAX, '\n'); // xoa buffer
	gets_s(str, MAX);
}

void XuatChuoi(String str)
{
	cout << "\n" << str;
}

void Chuyen_KT_thuong(String str)
{
	int len, i;
	len = strlen(str);

	for (i = 0; i < len; i++)
		if (65 <= str[i] && str[i] <= 90)
			// chuyen thanh ky tu thuong
			str[i] = str[i] + 32;
}

void Chuyen_KT_HOA(String str)
{
	int len, i;
	len = strlen(str);

	for (i = 0; i < len; i++)
		if (97 <= str[i] && str[i] <= 122)
			// chuyen thanh ky tu thuong
			str[i] = str[i] - 32;
}

void HoanVi(char &a, char &b)
{
	char t = a;
	a = b;
	b = t;
}

void DaoNguocChuoi(String a)
{
	int len, i, mid;
	len = strlen(a);

	mid = len / 2;
	for (i = 0; i < mid; i++)
		HoanVi(a[i], a[len - 1 - i]);
}

int KiemTraDoiXung(String str)
{
	int kq = 1, i, len, mid;

	len = strlen(str);
	mid = len / 2;

	for (i = 0; i < mid; i++)
		if (str[i] != str[len - i - 1])
		{
			kq = 0;
			break;
		}

	return kq;
}





