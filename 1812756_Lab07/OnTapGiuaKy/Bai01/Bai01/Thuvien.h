
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

