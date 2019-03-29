
void XuatUocSo(unsigned int n);
int DemUocSo(unsigned int n);
int TinhTongUocSo(unsigned int n);
int TimSoLonNhat(unsigned int n);
int TimSoLonNhat(unsigned int n);
bool LaSoHoanHao(unsigned int n);

/*
	Dinh nghia ham xuat cac uoc so cua n
	Input: n = 1 so nguyen duong
	Output: khong
*/
void XuatUocSo(unsigned int n)
{
	cout << "\n";
	for (int i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
			cout << i << ", ";
	}
	cout << "\n";
}

/*
	Dinh nghia ham dem so luong cac uoc so cua n
	Input: n = 1 so nguyen duong
	Output: so luong cac uoc so
*/
int DemUocSo(unsigned int n)
{
	int count = 0;

	for (int i = 1; i <= n/2; i++)
		if (n % i == 0)
			count++;

	return count;
}

/*
	Dinh nghia ham tinh tong cac uoc so cua n
	Input: n = 1 so nguyen duong
	Output: tong cac uoc so cua n
*/
int TinhTongUocSo(unsigned int n)
{
	int sum = 0;

	for (int i = 1; i <= n/2; i++)
		if (n % i == 0)
			sum += i;

	return sum;
}

/*
	Dinh nghia ham tim so lon nhat nho hon hoac bang n ma la luy thua cua 2
	Input: n = 1 so nguyen duong
	Output: so nguyen thoa dieu kien
*/
int TimSoLonNhat(unsigned int n)
{
	int mu = 0; // khai bao bien n luu so mu

	while (pow(2, mu) <= n)
		mu++;

	mu--; // giam n di 1 
	return pow(2, mu);
}

/*
	Dinh nghia ham kiem tra so hoan hao
	Input: n = 1 so nguyen duong
	Output:
		true: n la so hoan hao
		false: n khong phai la so hoan hao
*/
bool LaSoHoanHao(unsigned int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
		if (n  % i == 0)
			sum += i;

	return sum == n;
}



