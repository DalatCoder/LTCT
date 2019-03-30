
/*
	Ham tim so Fibonacci thu n
	Input: so thu tu cua so Fibonacci can xuat
	Output: so Fibonacci thu n
	Day Fibonacci: 0 1 1 2 3 5 .... 
*/
int GetFibonacci(unsigned int n)
{
	if (n < 2)
		return n;
	else
	{
		int Ex_Fibo = 0, Current_Fibo = 1;
		for (int i = 2; i < n; i++)
		{
			int temp = Ex_Fibo + Current_Fibo;
			Ex_Fibo = Current_Fibo;
			Current_Fibo = temp;
		}
		return Current_Fibo;
	}
}

/*
	Ham liet ke cac so Fibonacci nho hon hoac bang n
	Input:
		- n: 1 so nguyen duong >= 2
	Output: khong
*/
void LietKeFibonacciThoaDieuKien(unsigned int n)
{
	cout << "\nDanh sach cac so Fibonacci <= n: " << endl;
	int Ex_Fibo = 0, Current_Fibo = 1;
	do
	{
		cout << Ex_Fibo << " ";
		int temp = Ex_Fibo + Current_Fibo;
		Ex_Fibo = Current_Fibo;
		Current_Fibo = temp;
	} while (Current_Fibo <= n);

	cout << "\n";
}

/*
	Ham liet ke n so Fibonaci dau tien
	Input: 1 so nguyen duong n >= 2
	Output: khong
*/
void SoFibonacciDauTien(unsigned int n)
{
	int Ex_Fibo = 0, Current_Fibo = 1;
	cout << "\nLiet ke " << n << " so Fibonacci dau tien: " << endl;
	cout << Ex_Fibo << " " << Current_Fibo << " ";
	for (int i = 2; i < n; i++)
	{
		int temp = Ex_Fibo + Current_Fibo;
		Ex_Fibo = Current_Fibo;
		Current_Fibo = temp;
		cout << Current_Fibo << " ";
	}
	cout << endl;
}
