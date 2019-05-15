
int Fib(int n);
void Xuat_K_Fib(int k);

int Fib(int n)
{
	int kq;
	if (n == 0)
		kq = 0;
	else
		if (n == 1)
			kq = 1;
		else
			if (n > 1)
				kq = Fib(n - 1) + Fib(n - 2);
	return kq;
}

void Xuat_K_Fib(int k)
{
	int i;
	for (i = 0; i < k; i++)
		cout << Fib(i) << '\t';
}

int Tinh_Cnk(int n, int k)
{
	int kq;
	if (k == 0 || k == n)
		kq = 1;
	else
		if (0 < k && k < n)
			kq = Tinh_Cnk(n - 1, k) + Tinh_Cnk(n - 1, k - 1);
	return kq;
}


