
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
	char x;

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

		cout << "\nNhap vao ky tu x: ";
		cin >> x;
		kq = DemSoLanXuatHien_X(a, x);
		cout << "\nSo lan xuat hien cua phan tu x trong a la " << kq;
		break;
				
	case 6:
		cout << "\n6. Vi tri xuat hien dau tien cua X";

		cout << "\nNhap vao ky tu x: ";
		cin >> x;
		kq = VT_XuatHien_DauTien(a, x);
		if (kq == -1)
			cout << "\nKy tu x khong xuat hien trong chuoi a.";
		else
			cout << "\nVi tri xuat hien dau tien cua ky tu x la : " << kq;

		break;

	}
	_getch();
}







