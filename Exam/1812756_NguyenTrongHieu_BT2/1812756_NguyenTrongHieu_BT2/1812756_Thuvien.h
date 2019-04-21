#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);

void NhapMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

int Tong_GT_PhanBiet(DaySo a, int n)
{

}




