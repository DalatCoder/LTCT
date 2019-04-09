
void XuatMenu();
int  ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);

void XuatMenu()
{
	cout << "\n============== CHON CHUC NANG ===============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap mang tu dong";
	cout << "\n2. Xuat mang";
	cout << "\n3. Sap xep so duong tang dan";
	cout << "\n4. Sap xep so 0 o cuoi mang";
	cout << "\n5. Sap xep so 0 o dau mang - am giam - duong tang";
	cout << "\n6. Sap xep so le tang dan - so chan giam dan";
	cout << "\n7. Sap xep so nguyen to dau mang tang dan";
	cout << "\n=============================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	do
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang >> ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);

	return stt;
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap mang tu dong";
		NhapMangTuDong(a, n);
		cout << "\nMang vua nhap:\n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2. Xuat mang\n";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3. Sap xep so duong tang dan";
		cout << "\nMang a truoc khi sap xep\n";
		XuatMang(a, n);
		SoDuongTangDan(a, n);
		cout << "\nMang a sau khi sap xep\n";
		XuatMang(a, n);
		break;
	case 4:
		cout << "\n4. Sap xep so 0 o cuoi mang";
		cout << "\nMang a truoc khi sap xep\n";
		XuatMang(a, n);
		So0CuoiMang(a, n);
		cout << "\nMang a sau khi sap xep\n";
		XuatMang(a, n);
		break;
	case 5:
		cout << "\n5. Sap xep so 0 o dau mang - am giam - duong tang";
		cout << "\nMang a truoc khi sap xep\n";
		XuatMang(a, n);
		so0_AmGiam_DuongTang(a, n);
		cout << "\nMang a sau khi sap xep\n";
		XuatMang(a, n);
		break;
	case 6:
		cout << "\n6. Sap xep so le tang dan - so chan giam dan";
		break;
	case 7:
		cout << "\n7. Sap xep so nguyen to dau mang tang dan";
		break;
	}
	_getch();
}




