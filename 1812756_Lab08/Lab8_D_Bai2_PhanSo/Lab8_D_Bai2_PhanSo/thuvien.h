
struct PhanSo
{
	int tu;
	unsigned int mau;
};


PhanSo Nhap_PS()
{
	PhanSo a;
	cout << "\nNhap tu so: ";
	cin >> a.tu;
	do
	{
		cout << "\nNhap mau so ( > 0) : ";
		cin >> a.mau;
	} while (a.mau <= 0);
	return a;
}

void Xuat_PS(PhanSo a)
{
	if (a.tu == 0)
	{
		cout << 0;
		return;
	}
	if (a.mau == 1)
	{
		cout << a.tu;
		return;
	}
	cout << a.tu << '/' << a.mau;
}

unsigned int Tinh_GTTD(int x)
{
	return (x >= 0 ? x : -x);
}

unsigned int UCLN(unsigned int a, unsigned int b)
{
	unsigned int r;
	while (b > 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

unsigned int BCNN(unsigned int a, unsigned int b)
{
	return (a * b) / UCLN(a, b);
}

void RutGon(PhanSo &a)
{
	unsigned int d;
	d = UCLN(Tinh_GTTD(a.tu), a.mau);
	a.mau /= d;
	a.tu = a.tu / (int)d;
}




