
void XuatMenu()
{
	cout << "\n=========== SIN - COS - TAN =============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Tinh sin(x)";
	cout << "\n2. Tinh cos(x)";
	cout << "\n3. Tinh e^x";
	cout << "\n=========================================\n";
}

int ChonMenu(int soMenu)
{
	int stt = -1;

	while (stt < 0 || stt > soMenu)
	{
		system("cls");
		XuatMenu();
		cout << "\nXin moi chon chuc nang >> ";
		cin >> stt;
	}

	return stt;
}

void XuLyMenu(int menu, int deg)
{
	double kq;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Tinh sin(x)";
		kq = TinhSin(deg);
		cout << "\nSin(" << deg << ") = " << kq;
		break;
	case 2:
		cout << "\n2. Tinh cos(x)";
		kq = TinhCos(deg);
		cout << "\nCos(" << deg << ") = " << kq;
		break;
	case 3:
		cout << "\n3. Tinh e^x";
		kq = TinhE(deg);
		cout << "\ne^" << deg << " = " << kq;
		break;
	}
	_getch();
}

