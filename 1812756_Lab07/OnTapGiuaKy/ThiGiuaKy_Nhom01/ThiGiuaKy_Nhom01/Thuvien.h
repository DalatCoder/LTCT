
#define MAX 100

typedef char String[MAX];

void NhapXauKyTu(String a);
void XuatXauKyTu(String a);
int TinhChieuDai(String a);
int DemSoLanXuatHien_X(String a, char x);
int KiemTra_KT_Thuong(char x);
int Chuyen_KT_HOA(char x);
int Chuyen_KT_Thuong(char x);
void ChuyenXauKyTu(String a);

void NhapXauKyTu(String a)
{
	cout << "\nNhap vao 1 chuoi: ";
	// _flushall();
	cin.ignore(MAX, '\n');
	gets_s(a, MAX);
}

void XuatXauKyTu(String a)
{
	cout << "\n" << a;
}

int TinhChieuDai(String a)
{
	int i = 0;
	while (a[i])
		i++;
	return i;
}

int DemSoLanXuatHien_X(String a, char x)
{
	int i, dem;
	dem = 0;
	for (i = 0; a[i] != NULL; i++)
		if (a[i] == x)
			dem++;

	return dem;
}

int Chuyen_KT_HOA(char x)
{
	if ('a' <= x && x <= 'z')
		return (x - 32);
}

int Chuyen_KT_Thuong(char x)
{
	if ('A' <= x && x <= 'Z')
		return (x + 32);
}

void ChuyenXauKyTu(String a)
{
	int i;

	a[0] = Chuyen_KT_Thuong(a[0]);

	for (i = 1; a[i] != NULL; i++)
		if (i % 2 == 0)
			a[i] = Chuyen_KT_Thuong(a[i]);
		else
			a[i] = Chuyen_KT_HOA(a[i]);
}



