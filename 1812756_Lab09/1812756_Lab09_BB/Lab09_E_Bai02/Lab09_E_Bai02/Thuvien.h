
#define MAX 100

void NhapChuoi(char *str);
void XuatChuoi(const char *str);
int Dem_X(const char *str, const char x);
int ViTri_T_X(char *str, char *subStr);
int ViTri_X(const char *str, char X);
void DaoTu(char *str);
void ChuyenXau(char *str);
void LietKe_KyTu(char *str);

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

int Dem_X(const char *str, const char x)
{
	int dem, i;
	dem = 0, i = 0;

	for (int i = 0; str[i] != NULL; i++)
		str[i] == x ? dem++ : dem;

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

	int soKhoangTrang = Dem_X(str, ' ');
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

int Hoa_Thuong(char x)
{
	return ('A' <= x && x <= 'Z' ? x + 32 : x);
}

int Thuong_Hoa(char x)
{
	return ('a' <= x && x <= 'z' ? x - 32 : x);
}

void ChuyenXau(char *str)
{
	str[0] = Thuong_Hoa(str[0]);
	for (int i = 1; str[i] != NULL; i++)
		str[i] = Hoa_Thuong(str[i]);
}

void LietKe_KyTu(char *str)
{
	char t[MAX];
	int dem[MAX];
	int i, dau, m;
	m = 0;

	for (i = 0; str[i] != NULL; i++)
	{
		dau = 1;
		str[i] = Hoa_Thuong(str[i]);
		for (int j = 0; j < m; j++)
		{
			if (str[i] == t[j])
			{
				dau = 0;
				break;
			}
		}
		if (dau)
			t[m++] = str[i];
	}
	t[m] = NULL;
	for (int i = 0; i < m; i++)
		dem[i] = Dem_X(str, t[i]);

	cout << "\nSo lan xuat hien cua tung ky tu trong chuoi.\n";
	for (int i = 0; i < m; i++)
		cout << t[i] << " - " << dem[i] << endl;
	cout << "\nXem lai chuoi de kiem tra: \n";
	XuatChuoi(str);
}



