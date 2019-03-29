
double TinhTongR(unsigned int n);
double TinhTongS(unsigned int n);
double TinhTongT(unsigned int n);

/*
	Dinh nghia ham tinh tong 1 + 1/2 + ... + 1/n
	Input: n = mot so nguyen duong
	Output: Tong 
*/
double TinhTongR(unsigned int n)
{
	double sum = 0; // Khai bao bien de luu ket qua
	unsigned int i;

	// Duyet qua tung so i tu 1 den n
	for (i = 1; i <= n; i++)
		sum += 1.0 / i; // Cong don 1/i vao ket qua

	return sum;
}

/*
	Dinh nghia ham tinh tong 2/1 + 3/4 + 4/9
	Input: n = mot so nguyen duong
	Output: tong
*/
double TinhTongS(unsigned int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += (i + 1.0) / (i * i);
	return sum;
}

/*
	Dinh nghia ham tinh tong T = -1/2 + 2/3 - 3/4
	Input: n = mot so nguyen duong
	Output: tong
*/
double TinhTongT(unsigned int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			sum += i / (i + 1.0);
		else
			sum -= i / (i + 1.0);
	}
	return sum;
}
