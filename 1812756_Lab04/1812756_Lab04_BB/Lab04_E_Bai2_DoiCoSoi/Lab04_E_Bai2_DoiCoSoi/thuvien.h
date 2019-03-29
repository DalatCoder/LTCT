
void Xuat(int so);
unsigned int TimLuyThua(unsigned int n, unsigned int b);
void DoiCoSo(unsigned int n, unsigned int b);


/*
	Dinh nghia ham xuat de xuat 1 chu so hoac chu cai ra man hinh
	Input: so = 1 so
	Output: khong
*/
void Xuat(int so)
{
	if (so < 10)
		cout << so;
	else
	{
		switch (so)
		{
		case 10:
			cout << "A"; 
			break;
		case 11:
			cout << "B";
			break;
		case 12:
			cout << "C";
			break;
		case 13:
			cout << "D";
			break;
		case 14:
			cout << "E";
			break;
		case 15:
			cout << "F";
			break;
		}
	}
}


/*
	Dinh nghia ham tim luy thua de tim 1 so nguyen lon nhat nho hon hoac bang n va la luy thua cua b
	Inupt:
		n = 1 so nguyen duong he 10
		b = he co so
	Output:
		luy thua tuong ung
*/
unsigned int TimLuyThua(unsigned int n, unsigned int b)
{
	int ketQua = 1;
	while (pow(b, ketQua) <= n)
	{
		ketQua++;
	}

	ketQua--;
	return pow(b, ketQua);
}

/*
	Dinh nghia ham chuyen doi co so
	Input:
		n = 1 so nguyen duong
		b = he co so can chuyen doi
	Output: Khong. Xuat ket qua ra man hinh
*/
void DoiCoSo(unsigned int n, unsigned int b)
{
	int so;
	int v = TimLuyThua(n, b);
	while (v > 0)
	{
		if (n < v)
			Xuat(0);
		else
		{
			so = n / v;
			Xuat(so);
			n = n - so * v;
		}
		v = v / b;
	}
}



