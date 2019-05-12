
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






