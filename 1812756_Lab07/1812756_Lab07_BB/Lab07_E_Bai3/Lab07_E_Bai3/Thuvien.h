
#define MAX 100

typedef char String[MAX];

void NhapChuoi(String str);
void XuatChuoi(String str);
void chuyenKyTuThuong(String str);
void chuyenKyTuHoa(String str);


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
