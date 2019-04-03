
#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMangTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
int soNguyenTo(int n);
int SoNguyenToCuoiCung(DaySo a, int n);

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


