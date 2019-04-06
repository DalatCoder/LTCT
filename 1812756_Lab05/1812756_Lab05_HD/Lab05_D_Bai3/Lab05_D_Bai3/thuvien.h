
#define		MAX		100
#define		TAB		'\t'

typedef		int		DaySo[MAX];

void NhapTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
void ChenDauDay(DaySo a, int &n, int x);
void XoaDauDay(DaySo a, int &n);
void CatDau_ChenCuoi(DaySo a, int &n);
void Thay_X_Bang_Y(DaySo a, int &n, int x, int y);
void SapTang(DaySo a, int n);
void HoanVi(int &x, int &y);
void Sap_DuongTang_AmGiam_Khong(DaySo a, int n);

void NhapTuDong(DaySo a, int &n)
{
	int i;
	cout << "\nNhap kich thuoc n: ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}

void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;
}

void ChenDauDay(DaySo a, int &n, int x)
{
	int i;
	for (i = n - 1; i >= 0; i--)
		a[i + 1] = a[i];
	a[0] = x;
	n++;
}

void XoaDauDay(DaySo a, int &n)
{
	int i;
	for (i = 1; i < n; i++)
		a[i - 1] = a[i];
	n--;
}

void CatDau_ChenCuoi(DaySo a, int &n)
{
	int i, x;
	x = a[0];
	for (i = 1; i < n; i++)
		a[i - 1] = a[i];
	a[n - 1] = x; // gan x vao vi tri cuoi cung
}

void Thay_X_Bang_Y(DaySo a, int &n, int x, int y)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == x)
			a[i] = y;
}

void SapTang(DaySo a, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}

void HoanVi(int &x, int &y)
{
	int tam;
	tam = x;
	x = y;
	y = tam;
}

void Sap_DuongTang_AmGiam_Khong(DaySo a, int n)
{
	int i, j, mc;
	for (i = 0; i < n-1; i++)
		for (j = i + 1; j < n; j++)
		{
			mc = (a[i] < 0 && a[j] < 0 && a[i] < a[j]) ||
				(a[i] < 0 && a[j] > 0) ||
				(a[i] == 0 && a[j] != 0) ||
				(a[i] > 0 && a[j] > 0 && a[i] > a[j]);
			if (mc)
				HoanVi(a[i], a[j]);
		}
}
