
#define MAX 100

int Fib(int n);
void Xuat_K_Fib(int k);
int Tinh_Cnk(int n, int k);
void MinMax(int a[MAX], int l, int r, int &Min, int &Max);

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


void MinMax(int a[MAX], int l, int r, int &Min, int &Max)
{
	int Min1, Min2, Max1, Max2;
	if (l == r)
	{
		Min = a[l];
		Max = a[l];
	}
	else
	{
		MinMax(a, l, (l + r) / 2, Min1, Max1);
		MinMax(a, (l + r) / 2 + 1, r, Min2, Max2);
		if (Min1 < Min2)
			Min = Min1;
		else
			Min = Min2;
		if (Max1 > Max2)
			Max = Max1;
		else
			Max = Max2;
	}
}

