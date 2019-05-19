
void XuatMenu()
{
	cout << "\n============ HE THONG CHUC NANG ===============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap danh sach tai lieu";
	cout << "\n2. Xem danh sach tai lieu";
	cout << "\n3. Tinh tong gia tat ca cac tai lieu";
	cout << "\n4. Tim sach theo nxb va nam xb";
	cout << "\n5. Tim sach theo tac gia";
	cout << "\n6. Thong ke so luong sach theo moi loai";
	cout << "\n7. Liet ke tai lieu theo nam xb";
	cout << "\n8. Tim tai lieu theo ma tai lieu";
	cout << "\n9. Sap xep tang dan theo tieu de";
	cout << "\n================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang tuong ung tu 1 .. " << soMenu << " : ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}

	return stt;
}

void XuLyMenu(int menu, TaiLieu *ds, int &n)
{
	char nhaXB[15];
	HoTen hoTen;
	int namXB;
	double kq;

	system("cls");
	switch (menu)
	{
		case 0:	
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Nhap danh sach tai lieu";
			Tao_DS_TaiLieu(ds, n);
			cout << "\nXem lai danh sach tai lieu:\n";
			Xuat_DS_TaiLieu(ds, n);
			break;

		case 2:
			cout << "\n2. Xem danh sach tai lieu";
			Xuat_DS_TaiLieu(ds, n);
			break;

		case 3:
			cout << "\n3. Tinh tong gia tat ca cac tai lieu";
			kq = TinhTong_Gia(ds, n);
			cout << "\nTong gia cua tat ca tai lieu la : " << kq << endl;
			break;
		case 4:
			cout << "\n4. Tim sach theo nxb va nam xb";
			cout << "\nNhap vao nha xuat ban can tim: ";
			cin.ignore(MAX, '\n');
			gets_s(nhaXB, 15);
			cout << "\nNhap vao nam xuat ban: ";
			cin >> namXB;
			TimTaiLieu_nhaXB(ds, n, nhaXB, namXB);
			cout << "\nXem lai danh sach tai lieu de kiem tra: \n";
			Xuat_DS_TaiLieu(ds, n);
			break;

		case 5:
			cout << "\n5. Tim sach theo tac gia";
			cout << "\nNhap ho va ten lot: ";
			cin.ignore(MAX, '\n');
			gets_s(hoTen.hoLot, 20);
			cout << "\nNhap ten tac gia: ";
			cin >> hoTen.ten;
			TimTaiLieu_TacGia(ds, n, hoTen);
			cout << "\nXem lai danh sach tai lieu de kiem tra: \n";
			Xuat_DS_TaiLieu(ds, n);
			break;

		case 6:
			cout << "\n6. Thong ke so luong sach theo moi loai";
			break;
		case 7:
			cout << "\n7. Liet ke tai lieu theo nam xb";
			break;
		case 8:
			cout << "\n8. Tim tai lieu theo ma tai lieu";
			break;
		case 9:
			cout << "\n9. Sap xep tang dan theo tieu de";
			break;
	}
	_getch();
}

