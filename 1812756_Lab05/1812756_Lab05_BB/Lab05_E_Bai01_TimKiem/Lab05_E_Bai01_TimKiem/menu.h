
void XuatMenu();
int  ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);

void XuatMenu()
{
	cout << "\n============= CHON CHUC NANG =================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap mang tu dong";
	cout << "\n2. Xuat mang";
	cout << "\n3. Tim vi tri cua SNT cuoi cung trong mang a";
	cout << "\n4. Tim phan tu xuat hien nhieu nhat";
	cout << "\n5. Tim phan tu co gia tri nho nhat";
	cout << "\n6. Tim so am lon nhat";
	cout << "\n7. Tim so duong nho nhat";
	cout << "\n=============================================\n";
}

int ChonMenu(int soMenu)
{
	int stt = -1;
	while (stt < 0 || stt > soMenu)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang >> ";
		cin >> stt;
	}
	return stt;
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	int kq;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap mang tu dong";
		NhapMangTuDong(a, n);
		cout << "\nDay so vua nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2. Xuat mang";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3. Tim vi tri cua SNT cuoi cung trong mang a";
		kq = SoNguyenToCuoiCung(a, n);
		if (kq == -1)
			cout << "\nKhong tim thay so nguyen to";
		else
			cout << "\nSo nguyen to cuoi cung la " << a[kq]
				<< ", tai vi tri: " << kq;
		break;
	case 4:
		cout << "\n4. Tim phan tu xuat hien nhieu nhat";
		XuatHienNhieuNhat(a, n);
		cout << "\nXem mang hien hanh de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 5:
		cout << "\n5. Tim phan tu co gia tri nho nhat";
		kq = ViTriMin(a, n);
		cout << "\nPhan tu nho nhat la : " << a[kq] << ", vi tri xuat hien dau tien la : " << kq;
		cout << "\nXem mang de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 6:
		cout << "\n6. Tim so am lon nhat";
		break;
	case 7:
		cout << "\n7. Tim so duong nho nhat";
		break;
	}
	_getch();
}

