
void XuatMenu()
{
	cout << "\n=============== HE THONG CHUC NANG ================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Tinh chieu dai chuoi";
	cout << "\n4. Chen ky tu x vao chuoi tai vi tri cho truoc";
	cout << "\n5. Xoa ky tu tai vi tri cho truoc";
	cout << "\n6. Cat ky tu cuoi chen vao vi tri dau";
	cout << "\n7. Xoa tat ca cac ky tu x";
	cout << "\n===================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang: ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, ChuoiDong a)
{
	int kq, vt;
	char x;
	system("cls");

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
		cout << "\nChuoi hien hanh: ";
		XuatChuoi(a);
		break;

	case 3:
		cout << "\n3. Tinh chieu dai chuoi";
		kq = TinhChieuDaiChuoi(a);
		cout << "\nChuoi hien hanh: ";
		XuatChuoi(a);
		cout << "\nCo do dai la: " << kq;
		break;

	case 4:
		cout << "\n4. Chen ky tu x vao chuoi tai vi tri cho truoc";
		cout << "\nChuoi hien hanh: ";
		XuatChuoi(a);
		cout << "\nNhap vao ky tu muon chen: ";
		cin >> x;
		cout << "\nNhap vao vi tri muon chen: ";
		cin >> vt;
		kq = ChenKT_VT(a, x, vt);
		if (kq)
		{
			cout << "\nChuoi sau khi chen: ";
			XuatChuoi(a);
		}
		else
			cout << "\nDa xay ra loi.";
		break;

	case 5:
		cout << "\n5. Xoa ky tu tai vi tri cho truoc";
		cout << "\nChuoi hien hanh:";
		XuatChuoi(a);
		cout << "\nNhap vao vi tri muon xoa: ";
		cin >> vt;
		kq = XoaKT_VT(a, vt);
		if (kq)
		{
			cout << "\nChuoi sau khi xoa: ";
			XuatChuoi(a);
		}
		else
			cout << "\nDa xay ra loi.";
		break;

	case 6:
		cout << "\n6. Cat ky tu cuoi chen vao vi tri dau";
		cout << "\nChuoi hien hanh:";
		XuatChuoi(a);
		CatCuoiChenDau(a);
		cout << "\nChuoi sau khi chen: ";
		XuatChuoi(a);
		break;

	case 7:
		cout << "\n7. Xoa tat ca cac ky tu x";
		break;
	}
	_getch();
}







