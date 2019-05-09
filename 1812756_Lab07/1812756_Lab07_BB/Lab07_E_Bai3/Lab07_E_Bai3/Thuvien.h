
#define MAX 100

typedef char String[MAX];

void NhapChuoi(String str);
void XuatChuoi(String str);

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


