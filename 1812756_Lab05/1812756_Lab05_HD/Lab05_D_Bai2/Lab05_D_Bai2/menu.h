
void XuatMenu();
int	 ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);


void XuatMenu()
{
	cout << "\n============= CHON CHUC NANG =================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap tu dong mang a";
	cout << "\n2. Xem du lieu mang a";
	cout << "\n3. Dem so lan xuat hien cua x trong a";
	cout << "\n4. Dem va xuat cac so nguyen to trong a";
	cout << "\n5. Tinh tong cac gia tri trong mang";
	cout << "\n6. Tinh tong cac gia tri chi xuat hien mot lan trong mang";
	cout << "\n7. Tinh tong cac gia tri phan biet trong mang";
	cout << "\n==============================================\n";
}

int ChonMenu(int soMenu)
{
	int stt = -1;

	while (stt < 0 || stt > soMenu)
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,..." << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
	}

	return stt;
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	int x, kq;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap tu dong mang a";
		cout << "\nNhap kich thuoc n: ";
		cin >> n;
		NhapTuDong(a, n);

		system("cls");
		cout << "\nDay so moi nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2. Xem du lieu mang a";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3. Dem so lan xuat hien cua x trong a";
		cout << "\nNhap gia tri can xet: x = ";
		cin >> x;
		kq = Dem_X(a, n, x);
		
		system("cls");
		cout << "\nSo lan " << x << " xuat hien trong a: kq = " << kq;
		cout << "\nXem lai mang hien hanh de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 4:
		cout << "\n4. Dem va xuat cac so nguyen to trong a";
		kq = Dem_NT(a, n);
		if (kq)
			cout << "\nSo luong cac so nguyen to trong a: kq = " << kq;
		else
			cout << "\nKhong co so nguyen to nao trong a.";
		cout << "\nXem lai mang hien hanh de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 5:
		cout << "\n5. Tinh tong cac gia tri trong mang";
		cout << "\nTong cac phan tu trong mang: sum = " << TinhTong(a, n);
		cout << "\nXem lai mang hien hanh de kiem tra: \n";
		XuatMang(a, n);
		break;
	case 6:
		cout << "\n6. Tinh tong cac gia tri chi xuat hien mot lan trong mang";
		cout << "\nTong cac phan tu trong mang chi xuat hien 1 lan: sum = " << TinhTongDuyNhat(a, n);
		cout << "\nXem lai mang hien hanh de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 7:
		cout << "\n7. Tinh tong cac gia tri phan biet trong mang";
		kq = TinhTong_PhanBiet(a, n);
		cout << "\nTong cac phan tu phan biet trong a: sum = " << kq;
		cout << "\nXem lai mang hien hanh de kiem tra:'n";
		XuatMang(a, n);
		break;
	}
	_getch();
}

