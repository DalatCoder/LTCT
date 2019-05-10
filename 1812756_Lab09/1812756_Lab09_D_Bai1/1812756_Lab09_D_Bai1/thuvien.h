
void XuatGiaTri_SoLan_PhanBiet(int *a, int n);
int* TaoMang(int &n);
void XuatMang(int *arr, int n);

void XuatGiaTri_SoLan_PhanBiet(int *a, int n)
{
	int i, dau;
	int *b, j, *c, m;
	m = 0;
	b = new int[n];

	for (i = 0; i < n; i++)
	{
		dau = 1;
		for (j = 0; j < m && dau; j++)
			dau = dau && (*(a + i) != *(b + j));
		if (dau)
		{
			*(b + m) = *(a + i);
			m++;
		}
	}

	c = new int[n];
	int k;
	for (k = 0; k < m; k++)
		*(c + k) = 0;

	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
			if (*(a + i) == *(b + j))
				*(c + j) = *(c + j) + 1;
	}

	cout << "\nCac gia tri phan biet trong a va so lan xuat hien caca gia tri nay: \n";
	for (k = 0; k < m; k++)
		cout << "\nGia tri " << *(b + k) << " xuat hien " << *(c + k) << " lan.";

	delete[] b;
	delete[] c;
}

int* TaoMang(int &n)
{
	int *arr;

	do
	{
		cout << "\nNhap vao so luong phan tu: ";
		cin >> n;
	} while (n <= 0);

	arr = new int[n];

	for (int i = 0; i < n; i++)
		*(arr + i) = rand() % 10;

	return arr;
}

void XuatMang(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << *(arr + i) << " ";
	cout << endl;
}


