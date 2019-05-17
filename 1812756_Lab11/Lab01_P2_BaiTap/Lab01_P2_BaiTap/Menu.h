
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int arr[], NhanVien[MAX], int &n_arr, int &n_nv);

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

void XuLyMenu(int menu, int arr[], NhanVien[MAX], int &n_arr, int &n_nv)
{
	char filename[MAX];
	switch (menu)
	{
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Chuyen du lieu vao mang";
			cout << "\nNhap ten file de mo: ";
			cin >> filename;
			file_Array(filename, arr, n_arr);
			cout << "\nDu lieu tu tap tin: \n";
			display_Array(arr, n_arr);
			break;

		case 2:
			cout << "\n2. Chuyen du lieu vao mang cau truc";
			break;
	}
	_getch();
}




