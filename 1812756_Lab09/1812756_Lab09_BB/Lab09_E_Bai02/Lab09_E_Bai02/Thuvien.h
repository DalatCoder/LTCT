
#define MAX 100

void NhapChuoi(char *str);
void XuatChuoi(const char *str);
int DemKhoangTrang(const char *str);
int ViTri_T_X(char *str, char *subStr);
int ViTri_X(const char *str, char X);
void DaoTu(char *str);

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

	for (int i = 0; str[i] != NULL; i++)
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

int ViTri_X(const char *str, char X)
{
	int vt = -1;

	for (int i = 0; str[i] != NULL; i++)
		if (str[i] == X)
		{
			vt = i;
			break;
		}

	return vt;
}

void XoaKyTu(char *str, int vt)
{
	int l = strlen(str);
	for (int i = vt; i < l; i++)
		str[i] = str[i + 1];
}

void BoKhoangTrang(char *str)
{
	while (str[0] == ' ')
		XoaKyTu(str, 0);
	while (str[strlen(str) - 1] == ' ')
		XoaKyTu(str, strlen(str) - 1);
	for (int i = 1; i < strlen(str) - 1; i++)
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			XoaKyTu(str, i);
			i--;
		}
}

void DaoNguocChuoi(char *str)
{
	int i, j;
	for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		char t = str[i];
		str[i] = str[j];
		str[j] = t;
	}
}

void DaoTu(char *str)
{
	BoKhoangTrang(str);
	char tuDau[MAX], tuCuoi[MAX];
	int m = 0;

	int soKhoangTrang = DemKhoangTrang(str);
	if (soKhoangTrang > 1)
	{
		while (str[0] != ' ')
		{
			tuDau[m++] = str[0];
			XoaKyTu(str, 0);
		}
		tuDau[m++] = NULL;
		
		m = 0;
		while (str[strlen(str) - 1] != ' ')
		{
			tuCuoi[m++] = str[strlen(str) - 1];
			XoaKyTu(str, strlen(str) - 1);
		}
		tuCuoi[m++] = NULL;
		DaoNguocChuoi(tuCuoi);
		strcat_s(str, MAX, tuDau);
		strcat_s(tuCuoi, MAX, str);
		strcpy_s(str, MAX, tuCuoi);
	}
}

