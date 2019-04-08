
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMangTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
int soNguyenTo(int n);
int SoNguyenToCuoiCung(DaySo a, int n);
int ViTriMax(DaySo a, int n);
int DemSoLanXuatHien(DaySo a, int n, int x);
int PhanTuXuatHienNhieuNhat(DaySo a, int n);
int ViTriMin(DaySo a, int n);
int soAmLonNhat(DaySo a, int n);
int soDuongNhoNhat(DaySo a, int n);

void NhapMangTuDong(DaySo a, int &n)
{
	do
	{
		cout << "\nNhap vao so phan tu cua mang : ";
		cin >> n;
	} while (n < 0);

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 10; // 0 - 9
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << TAB;
}

int soNguyenTo(int n)
{
	if (n < 2)
		return false;

	int kq = 1;
	int mid = sqrt(n);
	for (int i = 2; i <= mid; i++)
		if (n % i == 0)
		{
			kq = 0;
			break;
		}
	return kq;
}

int SoNguyenToCuoiCung(DaySo a, int n)
{
	int kq = -1;
	for (int i = 0; i < n; i++)
	{
		if (soNguyenTo(a[i]))
			kq = i;
	}
	return kq;
}

int ViTriMax(DaySo a, int n)
{
	int viTri = 0;
	int max = a[0];

	for (int i = 1; i < n; i++)
		if (a[i] > max)
		{
			max = a[i];
			viTri = i;
		}
	return viTri;
}

int DemSoLanXuatHien(DaySo a, int n, int x)
{
	int dem = 0, i;

	for (i = 0; i < n; i++)
		if (a[i] == x)
			dem++;

	return dem;
}

int PhanTuXuatHienNhieuNhat(DaySo a, int n)
{
	int kq = a[0], i, dem = DemSoLanXuatHien(a, n, a[0]);

	for (i = 1; i < n; i++)
	{
		int tam = DemSoLanXuatHien(a, n, a[i]);
		if (tam > dem)
		{
			dem = tam;
			kq = a[i];
		}
	}

	return kq;
}

int ViTriMin(DaySo a, int n)
{
	int viTri = 0;
	int min = a[0];

	for (int i = 1; i < n; i++)
		if (a[i] < min)
		{
			min = a[i];
			viTri = i;
		}

	return viTri;
}

int soAmLonNhat(DaySo a, int n)
{
	int kq = INT_MIN, vt = -1, i;

	for ( i = 0; i < n; i++)
		if (a[i] < 0)
		{
			kq = a[i];
			vt = i;
			break;
		}

	if (vt == -1)
		return vt;

	for (i ; i < n; i++)
	{
		if (a[i] < 0 && a[i] > kq)
			{
				kq = a[i];
				vt = i;
			}
	}

	return vt;
}

int soDuongNhoNhat(DaySo a, int n)
{
	int kq = INT_MAX, vt = -1, i;
	for (i = 0; i < n; i++)
		if (a[i] > 0)
		{
			kq = a[i];
			vt = i;
			break;
		}

	if (vt == -1)
		return vt;

	for (i ; i < n; i++)
		if (a[i] > 0 && (a[i] < kq))
		{
			kq = a[i];
			vt = i;
		}
	return vt;
}















