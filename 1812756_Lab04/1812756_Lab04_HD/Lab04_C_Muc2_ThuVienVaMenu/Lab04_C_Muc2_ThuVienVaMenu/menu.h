// Khai báo nguyên mẫu các hàm trong he thong menu

void XuatMenu();
int  ChonMenu(int soMenu);
void XuLyMenu(int menu);

/*
	Dinh nghia ham xuat menu: Xuat danh sach cac chuc nang ra man hinh
*/
void XuatMenu()
{
	cout << "\n========= HE THONG CHUC NANG =========";
	cout << "\n0. THOAT KHOI CHUONG TRINH";
	cout << "\n1. Chuc nang 1";
	cout << "\n2. Chuc nang 2";
	cout << "\n3. Chuc nang 3";
	cout << "\n4. Chuc nang 4";
	cout << "\n======================================";
}

/*
	Dinh nghia ham chon menu: chon mot chuc nang trong danh sach
*/
int ChonMenu(int soMenu)
{
	int stt; // bien de luu so thu tu chuc nang duoc chon
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap 1 so stt ( 1 <= stt <= " << soMenu << ") de chon menu: stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

/*
	Dinh nghia ham xu ly menu: xu ly chuc nang duoc chon
*/
void XuLyMenu(int menu)
{
	switch (menu)
	{
	case 0:
		cout << "\n0. THOAT KHOI CHUONG TRINH.\n";
		break;
	case 1:
		cout << "\n1. Ban da chon chuc nang 1";
		break;
	case 2:
		cout << "\n2. Ban da chon chuc nang 2";
		break;
	case 3:
		cout << "\n3. Ban da chon chuc nang 3";
		break;
	case 4:
		cout << "\n4. Ban da chon chuc nang 4";
		break;
	}
	_getch();
}
