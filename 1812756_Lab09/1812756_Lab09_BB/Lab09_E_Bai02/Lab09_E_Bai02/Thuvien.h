
#define MAX 100

void NhapChuoi(char *str);
void XuatChuoi(const char *str);

void NhapChuoi(char *str)
{
	cout << "\nNhap chuoi: ";
	cin.ignore(MAX, '\n');
	gets_s(str, MAX);
}

void XuatChuoi(const char *str)
{
	cout << str << endl;
}


