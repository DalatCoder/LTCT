
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);

void XuatMenu()
{
	cout << "\n================== CHON CHUC NANG ====================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Xuat day so ra man hinh";
	cout << "\n2. Tinh tong cac gia tri khac nhau cua day so";
	cout << "\n3. Xuat so lan xuat hien cua gia tri MIN";
	cout << "\n4. Xoa tat ca phan tu bang MAX";
	cout << "\n5. Sap day theo yeu cau";
	cout << "\n=======================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang >> ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	system("cls");
	int kq;
	switch (menu)
	{
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Xuat day so ra man hinh:\n";
			XuatMang(a, n);
			break;
		case 2:
			cout << "\n2. Tinh tong cac phan tu khac nhau trong day";
			kq = Tong_GT_PhanBiet(a, n);
			cout << "\nTong cac gia tri phan biet trong day la : " << kq;
			cout << "\nXem lai mang hien hanh de kiem tra:\n";
			XuatMang(a, n);
			break;
		case 3:
			cout << "\n3. Xuat so lan xuat hien cua gia tri MIN";
			kq = DemSoLanXuatHien_Min(a, n);
			cout << "\nPhan tu nho nhat trong day la : " << TinhMin(a, n);
			cout << "\nSo lan xuat hien cua phan tu nay la : " << kq; 
			cout << "\nXem mang hien hanh de kiem tra:\n";
			XuatMang(a, n);
			break;
		case 4:
			cout << "\n4. Xoa tat ca cac phan tu co gia tri bang MAX";
			cout << "\nMang ban dau :\n";
			cout << "\nPhan tu lon nhat: " << TinhMax(a, n);
			XuatMang(a, n);

			Xoa_TatCa_PhanTu(a, n);
			cout << "\nMang sau khi xoa phan tu lon nhat: \n";
			XuatMang(a, n);
			break;
		case 5:
			cout << "\n5. Sap xep mang theo yeu cau";
			cout << "\nMang ban dau truoc khi sap xep:\n";
			XuatMang(a, n);
			SapXep(a, n);
			cout << "\nMang sau khi sap xep theo yeu cau:\n";
			XuatMang(a, n);
			break;
	}

	_getch();
}



