

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);

/*
	Dinh nghia ham xuat ra danh sach chuc nang ra man hinh
	Input: khong co
	Output: khong co
*/
void XuatMenu()
{
	cout << endl << "========== HE THONG CHUC NANG ===========";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Tinh tong R";
	cout << endl << "2. Tinh tong S";
	cout << endl << "3. Tinh tong T";
	cout << endl << "=========================================";
}

/*
	Diinh nghia ham chon mot menu trong danh sach
	Input: soMenu = so luong menu co the chon
	Output: so thu tu menu do nguoi dung nhap vao
*/
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0..." << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

/*
	Dinh nghia ham xu ly menu
	Input
		menu = so thu tu menu do nguoi chon
		n = mot so nguyen duong
	Output: khong co
*/
void XuLyMenu(int menu, unsigned int n)
{
	double sum; 
	switch (menu)
	{
	case 0:
		cout << endl << "0. Thoat khoi chuong trinh";
		break;
	case 1:
		cout << endl << "1. Tinh tong R";

		// Goi ham tinh tong R
		sum = TinhTongR(n);

		// Xuat ket qua
		cout << endl << "R = " << sum;
		break;
	case 2:
		cout << endl << "2. Tinh tong S";

		// Goi ham tinh tong S
		sum = TinhTongS(n);

		// Xuat ket qua
		cout << endl << "S = " << sum;
		break;
	case 3:
		cout << endl << "3. Tinh tong T";

		// Goi ham tinh tong T
		sum = TinhTongT(n);

		// Xuat ket qua
		cout << endl << "T = " << sum;
		break;
	}
	// Dung chuong trinh
	_getch();
}
