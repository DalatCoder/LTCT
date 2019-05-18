
void XuatMenu()
{
	cout << "\n=========== HE THONG CHUC NANG =============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Dem so khoang trang";
	cout << "\n3. Tim vi tri xuat hien cua chuoi t trong chuoi s";
	cout << "\n4. Tim vi tri xuat hien dau tien cua ky tu X";
	cout << "\n5. Dao vi tri cua tu dau va tu cuoi";
	cout << "\n6. Doi ky tu dau tien thanh HOA, con lai chu thuong";
	cout << "\n7. Liet ke tung ky tu va so lan xuat hien";
	cout << "\n8. Dem so tu trong chuoi s";
	cout << "\n============================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang tu 1 .. " << soMenu << " : ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}

	return stt;
}

void XuLyMenu(int menu, char *str)
{
	switch (menu)
	{
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\nNhap chuoi";
			NhapChuoi(str);
			cout << "\nChuoi vua nhap la: ";
			XuatChuoi(str);
			break;

		case 2:
			cout << "\n1. Dem so khoang trang";
			break;
		case 3:
			cout << "\n2. Tim vi tri xuat hien cua chuoi t trong chuoi s";
			break;
		case 4:
			cout << "\n3. Tim vi tri xuat hien dau tien cua ky tu X";
			break;
		case 5:
			cout << "\n4. Dao vi tri cua tu dau va tu cuoi";
			break;
		case 6:
			cout << "\n5. Doi ky tu dau tien thanh HOA, con lai chu thuong";
			break;
		case 7:
			cout << "\n6. Liet ke tung ky tu va so lan xuat hien";
			break;
		case 8:
			cout << "\n7. Dem so tu trong chuoi s";
			break;
	}
	_getch();
}



