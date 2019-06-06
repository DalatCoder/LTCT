void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, NhanVien a[MAX], int &n);

void XuatMenu()
{
	cout << "============== BANG CHUC NANG ==============";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Dem so nhan vien";
	cout << "\n2. Xuat danh sach nhan vien ra man hinh";
	cout << "\n3. Tim nhan vien theo ma so";
	cout << "\n4. Tim so nhan vien co muc luong >= X";
	cout << "\n5. Sap xep theo muc luong";
	cout << "\n============================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("clear");
		XuatMenu();
		cout << "\nChon 1 so tu 0..." << soMenu << ":";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, NhanVien a[MAX], int &n)
{
	int kq;
	char tenTapTin[MAX];
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		system("clear");
		cout << "\n1. Dem so nhan vien";
		cout << "\nNhap ten tap tin de mo: " << endl;
		cin >> tenTapTin;

		kq = DemSo_NV(a, n, tenTapTin);
		if (kq == 0)
		{
			cout << "\nMo tap tin khong thanh cong\n";
		}
		else
		{
			cout << "\nMo tap tin thanh cong";
			cout << "\nSo nhan vien hien tai co trong danh sach la: " << n << endl;
		}

		cin.get();
		break;
	}
	cin.get();
}
