
#define MAX 100

void NhapChuoi(char *str);
void XuatChuoi(const char *str);
int DemKhoangTrang(const char *str);

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

int DemKhoangTrang(const char *str)
{
	int dem, i;
	dem = 0, i = 0;

	while (str[i++] != NULL)
		str[i] == ' ' ? dem++ : dem;

	return dem;
}


