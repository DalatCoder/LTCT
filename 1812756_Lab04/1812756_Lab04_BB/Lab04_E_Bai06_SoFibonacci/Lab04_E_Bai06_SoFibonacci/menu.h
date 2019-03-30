
/*
	Ham xuat menu
	Input: 1 so nguyen duong n
	Output: khong
*/
void XuatMenu(int n)
{
	cout << "\n=========== DAY FIBONACCI ============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Xuat ra so Fibonacci thu " << n;
	cout << "\n2. Liet ke so Fibonacci <= " << n;
	cout << "\n3. Liet ke " << n << " so Fibonacci dau tien";
	cout << "\n======================================\n";
}


/*
	Ham chon menu
	Input: 
		- So menu toi da
		- 1 so nguyen duong n
	Output:
		- So thu tu cua menu duoc chon
*/
int ChonMenu(int soMenu, int n)
{
	int stt;

	do
	{
		system("cls");
		XuatMenu(n);
		cout << "\nChon chuc nang tuong ung >> ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);

	return stt;
}


/*
	Ham xu ly menu
	Input:
		- So thu tu cua menu duoc chon
		- 1 so nguyen duong n
	Output:
		khong
*/
void XuLyMenu(int menu, int n)
{
	switch (menu)
	{	
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Xuat ra so Fibonacci thu " << n;
			cout << "\nSo Fibonacci thu " << n << " la: " << GetFibonacci(n);
			break;
		case 2:
			cout << "\n2. Liet ke so Fibonacci <= " << n;
			LietKeFibonacciThoaDieuKien(n);
			break;
		case 3:
			cout << "\n3. Liet ke " << n << " so Fibonacci dau tien";
			SoFibonacciDauTien(n);
			break;
	}
	_getch();
}
