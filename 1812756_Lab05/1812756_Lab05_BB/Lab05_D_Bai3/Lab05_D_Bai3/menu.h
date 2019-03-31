
void XuatMenu();
int  ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);


void XuatMenu()
{
	cout << "\n================ CHON CHUC NANG ===================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap tu dong day a";
	cout << "\n2. Xem du lieu day a";
	cout << "\n3. Chen x vao dau day";
	cout << "\n4. Xoa phan tu dau day";
	cout << "\n5. Cai phan tu dau day roi chen vao cuoi day";
	cout << "\n6. Thay the cac gia tri x trong a bang gia tri y";
	cout << "\n7. Sap day tang dan";
	cout << "\n8. Sap day theo yeu cau: Duong Tang - Am Giam - Khong";
	cout << "\n==================================================\n";
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
	int x, y;
	system("cls");
	switch (menu)
	{
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Nhap tu dong day a";
			NhapTuDong(a, n);
			
			system("cls");
			cout << "\nDay so moi nhap:\n";
			XuatMang(a, n);
			break;
		case 2:
			cout << "\n2. Xem du lieu day a";
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			break;
		case 3:
			cout << "\n3. Chen x vao dau day";
			cout << "\nNhap gia tri can chen: x = ";
			cin >> x;
			cout << "\nKich thuoc mang hien hanh: n = " << n;
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			ChenDauDay(a, n, x);
			cout << "\nKich thuoc mang ket qua: n = " << n;
			cout << "\nDay so ket qua sau khi chen " << x << " vao dau day:\n";
			XuatMang(a, n);
			break;
		case 4:
			cout << "\n4. Xoa phan tu dau day";
			cout << "\nKich thuoc mang hien hanh: n = " << n;
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			XoaDauDay(a, n);
			cout << "\nKich thuoc mang ket qua: n = " << n;
			cout << "\nDay so ket qua sau khi xoa gia tri dau:\n";
			XuatMang(a, n);
			break;
		case 5:
			cout << "\n5. Cai phan tu dau day roi chen vao cuoi day";
			cout << "\nKich thuoc mang hien hanh: n = " << n;
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			CatDau_ChenCuoi(a, n);
			cout << "\nKich thuoc mang ket qua: n = " << n;
			cout << "\nDay so ket qua sau khi cat gia tri dau roi chen vao cuoi day:\n";
			XuatMang(a, n);
			break;
		case 6:
			cout << "\n6. Thay the cac gia tri x trong a bang gia tri y";
			cout << "\nNhap gia tri can thay the: x = ";
			cin >> x;
			cout << "\nNhap gia tri thay the: y = ";
			cin >> y;

			cout << "\nKich thuoc mang hien hanh: n = " << n;
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			Thay_X_Bang_Y(a, n, x, y);
			cout << "\nKich thuoc mang ket qua: n = " << n;
			cout << "\nDay so ket qua sau khi thay " << x << " bang gia tri " << y << ":\n";
			XuatMang(a, n);
			break;
		case 7:
			cout << "\n7. Sap day tang dan";
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			SapTang(a, n);
			cout << "\nDau so sau khi sap tang:\n";
			XuatMang(a, n);
			break;
		case 8:
			cout << "\n8. Sap day theo yeu cau: Duong Tang - Am Giam - Khong";
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			Sap_DuongTang_AmGiam_Khong(a, n);
			cout << "\nDay so sau khi sap xep theo yeu cau:\n";
			XuatMang(a, n);
			break;
	}
	_getch();
}

