
// Khai bao nguyen mau ham
void XuatDaySo(unsigned int n);
int demSoThoaDieuKien(unsigned int n);
int demSoLuongChuSo(int n);
int DaoNguocSo(int n);
int TongCacChuSo(int n);
int TimChuSoDauTien(int n);
void XuatSoHoanChinh(int n);
int TimSoNguyenThoaDieuKien(int n);

// Phan dinh nghia ham

/*
	Dinh nghia ham xuat cac so tu 1 toi n
	Input: n = 1 so nguyen duong
	Output: khong
*/
void XuatDaySo(unsigned int n)
{
	cout << "\n";
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		if (i % 10 == 0)
			cout << "\n";
	}
}

/*
	Dinh nghia ham dem so: dem so luong cac so chia het cho 3
	nhung khong chia het cho 4 trong doan 1..n
	Input: n = 1 so nguyen duong
	Output: so luong cac so chia het
*/
int demSoThoaDieuKien(unsigned int n)
{
	int count = 0;

	for (int i = 1; i <= n; i++)
		if (i % 3 == 0 && i % 4 != 0)
			count++;

	return count;
}

/*
	Dinh nghia ham dem so luong chu so
	Input: n = 1 so nguyen duong
	Output: so luong chu so cua n
*/
int demSoLuongChuSo(int n)
{
	int count = 0;

	while (n % 10 != 0)
	{
		count++;
		n /= 10;
	}

	return count;
}

/*
	Dinh nghia ham dao nguoc so
	Input: n = 1 so nguyen duong
	Output: so dao nguoc cua so n
*/
int DaoNguocSo(int n)
{
	int soDaoNguoc = 0;
	int tmp;

	while (n > 0)
	{
		tmp = n % 10;
		soDaoNguoc = soDaoNguoc * 10 + tmp;
		n /= 10;
	}

	return soDaoNguoc;
}

/*
	Dinh nghia ham tinh tong cac chu so cua n
	Input: n = 1 so nguyen duong
	Output: tong cac chu so
*/
int TongCacChuSo(int n)
{
	int sum = 0;

	while (n % 10 > 0)
	{
		sum += (n % 10);
		n /= 10;
	}

	return sum;
}

/*
	Dinh nghia ham tim chu so dau tien cua 1 so
	Input: n = so nguyen duong
	Output: chu so dau tien cua n
*/
int TimChuSoDauTien(int n)
{
	int first;

	while (n % 10 > 0)
	{
		first = n % 10;
		n /= 10;
	}

	return first;
}

/*
	Dinh nghia ham kiem tra 1 so co phai so hoan chinh hay khong
	Input: n = 1 so nguyen duong
	Output:
		true: la so hoan chinh
		false: khong phai so hoan chinh
*/
bool laSoHoanChinh(int n)
{
	int sum = 0;

	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			sum += i;

	return sum == n;
}

/*
	Dinh nghia ham xuat cac so hoan chinh trong pham vi 1..n
	Input: n = 1 so nguyen duong
	Output: khong
*/
void XuatSoHoanChinh(int n)
{
	cout << "\nCac so hoan chinh tu 1 .. " << n << " la: ";
	for (int i = 1; i <= n; i++)
		if (laSoHoanChinh(i))
			cout << i << ", ";
}

/*
	Dinh nghia ham tim so nguyen m lon nhat thoa dieu kien 1+2+3+...+m <=n
	Input: n = 1 so nguyen duong
	Output: m
*/
int TimSoNguyenThoaDieuKien(int n)
{
	int m = 1;
	int sum = 0;

	while (sum + m <= n)
	{
		sum += m;
		m++;
	}
	
	m--;
	return m;
}

