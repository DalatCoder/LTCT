
bool LaSoNguyenTo(unsigned int n);
void XuatSNT(unsigned int n);
int demSNT(unsigned int n);
int TinhTongUocSNT(unsigned int n);
void PhanTichThuaSo(unsigned int n);


/*
	Dinh nghia ham kiem tra so nguyen to
	Input: n = 1 so nguyen duong
	Output
		true: la so nguyen to
		false: khong phai la so nguyen to
*/
bool LaSoNguyenTo(unsigned int n)
{
	if (n < 2)
		return false;

	bool result = true;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) 
		{
			result = false;
			break;
		}
	return result;
}


/*
	Dinh nghia ham xuat cac so nguyen to trong pham vi tu 1 .. n
	Input: 
		n = 1 so nguyen duong
	Output: khong
*/
void XuatSNT(unsigned int n)
{
	cout << '\n';
	int count = 0;
	for (int i = 1; i <= n; i++)
		if (LaSoNguyenTo(i))
		{
			count++;
			cout << i << '\t';
			if (count % 5 == 0)
				cout << '\n';
		}

}

/*
	Dinh nghia ham dem so nguyen to trong pham vi tu 1..n
	Input: n = 1 so nguyen duong
	Output: so luong snt
*/
int demSNT(unsigned int n)
{
	int count = 0;

	for (int i = 1; i <= n; i++)
		if (LaSoNguyenTo(i))
			count++;

	return count;
}

/*
	Dinh nghia ham tinh tong cac uoc so nguyen to cua n
	Input: n = 1 so nguyen duong
	Output: tong cac uoc so nguyen to
*/
int TinhTongUocSNT(unsigned int n)
{
	int sum = 0;

	for (int i = 2; i <= n; i++)
		if (n % i == 0)
			if (LaSoNguyenTo(i))
				sum += i;

	return sum;
}

/*
	Dinh nghia ham phan tich thua so nguyen to
	Input: n = 1 so nguyen duong
	Output: khong
*/
void PhanTichThuaSo(unsigned int n)
{
	cout << '\n';
	for (int i = 1; i <= n; i++)
	{
		if (LaSoNguyenTo(i))
		{
			if (n % i == 0)
			{
				cout << i << ".";
				n /= i;
			}
		}
	}
}

