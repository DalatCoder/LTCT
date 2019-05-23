
#define MAX 100

void NhapChuoi(char a[MAX]);
void XuatChuoi(char a[MAX]);
void HoanVi(char &a, char &b);
void DaoNguocChuoi(char a[MAX]);

void NhapChuoi(char a[MAX])
{
	cout << "\nNhap vao 1 chuoi: ";
	// _flushall();
	cin.ignore(MAX, '\n');
	gets_s(a, MAX);
}

void XuatChuoi(char a[MAX])
{
	cout << "\n" << a;
}

void HoanVi(char &a, char &b)
{
	char t = a;
	a = b;
	b = t;
}

void DaoNguocChuoi(char a[MAX])
{
	int i, j;
	
	for (i = 0, j = strlen(a) - 1; i < j; i++, j--)
	{
		char t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}

int ChuoiDoiXung(char a[MAX])
{
	int i, j, kq;
	kq = 1;

	for (i = 0, j = strlen(a) - 1; i < j; i++, j--)
		if (a[i] != a[j])
		{
			kq = 0;
			break;
		}

	return kq;
}

int DemSoLanXuatHien_X(char a[MAX], char x)
{
	int i, dem;
	dem = 0;
	for (i = 0; a[i] != NULL; i++)
		if (a[i] == x)
			dem++;

	return dem;
}

int VT_XuatHien_DauTien(char a[MAX], char x)
{
	int i, vt;
	vt = -1;

	for (i = 0; a[i] != NULL; i++)
		if (a[i] == x)
		{
			vt = i;
			break;
		}

	return vt;
}

int ChenKT_VT(char a[MAX], char x, int vt)
{
	int i, len, kq;
	len = strlen(a);
	kq = 1;

	if (vt < 0 || vt > len)
		kq = 0;
	else
	{
		len++;
		for (i = len; i > vt; i--)
			a[i] = a[i-1];
		a[vt] = x;
	}

	return kq;
}

