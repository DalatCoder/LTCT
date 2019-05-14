
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

