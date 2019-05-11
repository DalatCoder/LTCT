
void XuatMenu()
{
	cout << "\n================ HE THONG CHUC NANG =================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Tao danh sach sinh vien";
	cout << "\n2. Xem danh sach sinh vien";
	cout << "\n3. Xuat danh sach sinh vien giam dan theo diem";
	cout << "\n4. Xem danh sach sinh vien theo lop";
	cout << "\n5. Xuat danh sach sinh vien theo lop va giam dan theo diem";
	cout << "\n6. Thong ke chat luong hoc tap sinh vien theo lop";
	cout << "\n======================================================\n";
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

void XuLyMenu(int menu, SinhVien *a, int &n)
{
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break; 
	case 1:
		cout << "\n1. Tao danh sach sinh vien";
		TaoDanhSachSinhVien(a, n);
		cout << "\nDanh sach sinh vien hien hanh:\n";
		Xuat_DSSV(a, n);
		break;
	case 2:
		cout << "\n2. Xem danh sach sinh vien";
		cout << "\nDanh sach sinh vien hien hanh:\n";
		Xuat_DSSV(a, n);
		break;
	case 3:
		cout << "\n3. Xuat danh sach sinh vien giam dan theo diem";
		cout << "\nDanh sach sinh vien hien hanh:\n";
		Xuat_DSSV(a, n);
		Sap_DSSV_GiamDiem(a, n);
		cout << "\nDanh sach sinh vien sau khi sap xep:\n";
		Xuat_DSSV(a, n);
		break;

	case 4:
		cout << "\n4. Xem danh sach sinh vien theo lop";
		cout << "\nDanh sach sinh vien ban dau:\n";
		Xuat_DSSV(a, n);
		_getch();

		Xuat_DSSV_Lop(a, n, "CTK39");
		_getch();
		Xuat_DSSV_Lop(a, n, "CTK38");
		_getch();
		Xuat_DSSV_Lop(a, n, "CTK37");
		_getch();
		Xuat_DSSV_Lop(a, n, "CTK36");
		_getch();
		break;

	case 5:
		cout << "\n5. Xuat danh sach sinh vien theo lop va giam dan theo diem";
		break;
	case 6:
		cout << "\n6. Thong ke chat luong hoc tap sinh vien theo lop";
		break;
	}
	_getch();
}

