#define TAB '\t'


int TongCacUocSo(unsigned int n);
int KiemTraSNT(unsigned int n);
void XuatNSoNguyenToDauTien(unsigned int n);
int DemSo(int n);
int TichCacChuSo(unsigned int n);
int ChuSoCuoiCung(unsigned int n);

int TongCacUocSo(unsigned int n)
{
	int sum = 0;

	int tam = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			sum += i;

	return sum;
}

int KiemTraSNT(unsigned int n)
{
	int kq = 1;

	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
		{
			kq = 0;
			break;
		}

	return kq;
}

void XuatNSoNguyenToDauTien(unsigned int n)
{
	int dem = 0;
	int tam = 2;
	while (dem < n)
	{
		if (KiemTraSNT(tam))
		{
			cout << tam << TAB;
			dem++;
			if (dem % 5 == 0)
				cout << "\n";
		}
		tam++;

	}
}

int DemSo(int n)
{
	int dem = 0;

	while (n > 0)
	{
		n /= 10;
		dem++;
	}

	return dem;
}

int TichCacChuSo(unsigned int n)
{
	int tich = 1;

	while (n > 0)
	{
		int tam = n % 10;
		tich *= tam;
		n /= 10;
	}

	return tich;
}

int ChuSoCuoiCung(unsigned int n)
{
	return n % 10;
}



