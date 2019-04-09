
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMangTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
int KiemTraSoCo3ChuSo(int n);
int DemSoLuongSoCo3ChuSo(DaySo a, int n);
int SoLanXuatHien_X(DaySo a, int n, int x, int vt);
int DemSoNamNgoaiPhamVi(DaySo a, int n, int min, int max);
int KT_SoChinhPhuong(int n);
int DemSoChinhPhuong(DaySo a, int n);
int SoLanXuatHien_X(DaySo a, int n, int x, int vt);

void NhapMangTuDong(DaySo a, int &n)
{
	do
	{
		cout << "\nNhap vao so luong phan tu >> ";
		cin >> n;
	} while (n <= 0);

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 300;
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
		if ((i+1) % 10 == 0)
			cout << "\n";
	}
}

int KiemTraSoCo3ChuSo(int n)
{
	int kq = 0, dem = 0;

	while (n > 0)
	{
		dem++;
		n /= 10;
	}

	if (dem == 3)
		kq = 1;

	return kq;
}

int DemSoLuongSoCo3ChuSo(DaySo a, int n)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
		if (KiemTraSoCo3ChuSo(a[i]))
			dem++;

	return dem;
}

int DemSoNamNgoaiPhamVi(DaySo a, int n, int min, int max)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
		if (a[i] < min || a[i] > max)
			dem++;

	return dem;
}

int KT_SoChinhPhuong(int n)
{
	int tam = (int)sqrt((double)n);
	return (tam * tam == n);
}

int DemSoChinhPhuong(DaySo a, int n)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
		if (KT_SoChinhPhuong(a[i]))
			dem++;

	return dem;
}

int SoLanXuatHien_X(DaySo a, int n, int x, int vt)
{
	if (vt >= n)
		return 0;

	int dem = 0;
	for (int i = vt; i < n; i++)
		if (a[i] == x)
			dem++;

	return dem;
}


