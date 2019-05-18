
#define MAX 100

void NhapChuoi(char *str);
void XuatChuoi(const char *str);
int DemKhoangTrang(const char *str);
int ViTri_T_X(char *str, char *subStr);

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

int ViTri_T_X(char *str, char *subStr)
{
	char *t = NULL;
	int viTri;

	// Ham strstr tra ve 1 pointer toi dia chi xuat hien chuoi t trong chuoi x
	t = strstr(str, subStr);

	if (t)
		viTri = (t - str);
	else
		viTri = -1;
	return viTri;
}




