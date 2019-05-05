
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

