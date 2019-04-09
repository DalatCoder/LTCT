
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMangTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
void SoDuongTangDan(DaySo a, int n);

void NhapMangTuDong(DaySo a, int &n)
{
	do
	{
		cout << "\nNhap vao kich thuoc cua mang ";
		cin >> n;
	} while (n <= 0);

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}

void XuatMang(DaySo a, int n)
{
	setiosflags(ios::left);
	for (int i = 0; i < n; i++)
	{
		cout << setw(3) << a[i] << TAB;
		if ((i + 1) % 10 == 0)
			cout << "\n";
	}
}

void HoanVi(int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}

void SoDuongTangDan(DaySo a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
	}
}

void So0CuoiMang(DaySo a, int n)
{
	int i, j, mc;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			mc = (a[i] == 0 && a[j] != 0) ||
				(a[i] > a[j]);

			if (mc)
				HoanVi(a[i], a[j]);
		}
	}
}

void so0_AmGiam_DuongTang(DaySo a, int n)
{
	int i, j, mc;
	for (i = n - 1; i > 0; i--)
	{
		for (j = i - 1; j >= 0; j--)
		{
			mc =(a[i] < 0 && a[j] < 0 && a[i] > a[j]) ||
				(a[i] == 0 && a[j] != 0) ||
				(a[i] < 0 && a[j] > 0) ||
				(a[i] > 0 && a[j] > 0 && a[i] < a[j]);

			if (mc)
				HoanVi(a[i], a[j]);
		}
	}
}

