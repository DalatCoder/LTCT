
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMangTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
int soNguyenTo(int n);
int SoNguyenToCuoiCung(DaySo a, int n);
int ViTriMax(DaySo a, int n);
void XuatHienNhieuNhat(DaySo a, int n);
int ViTriMin(DaySo a, int n);

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

void XuatHienNhieuNhat(DaySo a, int n)
{
	DaySo b, c;
	int i; // duyet theo n
	int j; // duyet theo b, c
	int dau; // danh dau a[i] co thuoc b
	for (i = 0; i < n; i++)
		c[i] = 1; // khoi tao c: so lan xuat hien cua moi gia tri phan biet b[i] bang 1

	int m = 0; // khoi tao kich thuoc b, c

	for (i = 0; i < n; i++)
	{
		dau = 0; // a[i] khong thuoc b
		for (j = 0; j < m; j++)
			if (a[i] == b[j])
			{
				dau = 1; // a[i] thuoc b
				c[j]++; // b[i] tang them 1 lan xuat hien
				break;
			}
		if (!dau) // khong thuoc
		{
			b[m] = a[i];
			m++;
		}
	}

	int viTri = ViTriMax(c, m);
	cout << "\nPhan tu xuat hien nhieu nhat la: " << b[viTri] << ", voi so lan xuat hien " << c[viTri];
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
















