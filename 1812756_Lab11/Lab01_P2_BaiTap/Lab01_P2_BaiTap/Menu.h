
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int arr[], NhanVien[MAX], int &n);

void XuatMenu()
{
	cout << "\n=========== HE THONG CHUC NANG ================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Chuyen du lieu vao mang";
	cout << "\n2. Chuyen du lieu vao mang cau truc";
	cout << "\n===============================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang 0 .. " << soMenu << " : ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}

	return stt;
}

void XuLyMenu(int menu, int arr[], NhanVien[MAX], int &n)
{
	switch (menu)
	{
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Chuyen du lieu vao mang";
			break;
		case 2:
			cout << "\n2. Chuyen du lieu vao mang cau truc";
			break;
	}
	_getch();
}




