
#define MAX 100

typedef char String[MAX];

void NhapChuoi(String str);
void XuatChuoi(String str);
void chuyenKyTuThuong(String str);
void chuyenKyTuHoa(String str);
void HoanVi(char &x, char &y);
void DaoNguocChuoi(String str);
int ChuoiDoiXung(String str);

void NhapChuoi(String str)
{
	cout << "\nNhap 1 chuoi: ";
	cin.ignore(MAX, '\n');
	gets_s(str, MAX);
}

void XuatChuoi(String str)
{
	cout << "\n" << str;
}

void chuyenKyTuThuong(String str)
{
	int len, i;
	len = strlen(str);

	for (i = 0; i < len; i++)
		if (65 <= str[i] && str[i] <= 90)
			str[i] += 32;
}

void chuyenKyTuHoa(String str)
{
	int len, i;
	len = strlen(str);

	for (i = 0; i < len; i++)
		if (97 <= str[i] && str[i] <= 122)
			str[i] -= 32;
}

void HoanVi(char &x, char &y)
{
	char t = x;
	x = y;
	y = t;
}

void DaoNguocChuoi(String str)
{
	int len, mid, i;
	len = strlen(str);

	mid = (int)(len / 2);
	for (i = 0; i < mid; i++)
		HoanVi(str[i], str[len - i - 1]);
}

int ChuoiDoiXung(String str)
{
	int len, mid, i, kq;
	len = strlen(str);
	mid = (int)(len / 2);
	kq = true;

	for (i = 0; i < mid && kq; i++)
		if (str[i] != str[len - i - 1])
			kq = false;

	return kq;
}

