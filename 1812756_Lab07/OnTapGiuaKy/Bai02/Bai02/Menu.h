
void XuatMenu()
{
	cout << "\n=============== HE THONG CHUC NANG ==================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Dao chuoi";
	cout << "\n4. Kiem tra doi xung";
	cout << "\n5. Dem so lan xuat hien cua X";
	cout << "\n6. Vi tri xuat hien dau tien cua X";
	cout << "\n======================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang tuong ung: ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	} 

	return stt;
}

void XuLyMenu(int menu, char a[MAX])
{
	system("cls");
	int kq;

	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap chuoi";
		NhapChuoi(a);
		cout << "\nChuoi vua nhap: ";
		XuatChuoi(a);
		break;

	case 2:
		cout << "\n2. Xem chuoi";
		cout << "\nChuoi hien tai: ";
		XuatChuoi(a);
		break;

	case 3:
		cout << "\n3. Dao nguoc chuoi";
		cout << "\nChuoi ban dau: ";
		XuatChuoi(a);

		DaoNguocChuoi(a);
		cout << "\nChuoi sau khi dao nguoc: ";
		XuatChuoi(a);
		break;

	case 4:
		cout << "\n4. Kiem tra doi xung";

		kq = ChuoiDoiXung(a);
		if (kq)
			cout << "\nChuoi doi xung.";
		else
			cout << "\nChuoi khong doi xung.";

		break;

	case 5:
		cout << "\n5. Dem so lan xuat hien cua X";
		break;
	case 6:
		cout << "\n6. Vi tri xuat hien dau tien cua X";
		break;
	}
	_getch();
}







