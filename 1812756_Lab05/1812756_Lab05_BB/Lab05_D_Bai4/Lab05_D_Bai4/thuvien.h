#define MAX 100
#define TAB '\t'



void NhapTuDong(int a[MAX], int &n);
void XuatMang(int a[MAX], int n);
void Tim_Day_GiaTri_PhanBiet(int a[MAX], int n, int b[MAX], int c[MAX], int &m);



void NhapTuDong(int a[MAX], int &n)
{
	int i;
	cout << "\nNhap kich thuoc n: ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}

void XuatMang(int a[MAX], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;
}

void Tim_Day_GiaTri_PhanBiet(int a[MAX], int n, int b[MAX], int c[MAX], int &m)
{
	int i; // duyet theo n
	int j; // duyet b, c
	int dau; // danh dau a[i] co thuoc b
	for (i = 0; i < n; i++)
		c[i] = 1; // khoi tao c

	m = 0; // khoi tao kich thuoc b, c
	for (i = 0; i < n; i++)
	{
		dau = 0; // a[i] khong thuoc b
		for (j = 0; j < m; j++)
			if (a[i] == b[j])
			{
				dau = 1; // a[i] thuoc b
				c[j]++; // b[j] tang them 1 lan xuat hien
				break;
			}
		if (!dau)
		{
			b[m] = a[i]; // chen a[i] vao cuoi b
			m++;
		}
	}
}


