
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, String str);

void XuatMenu()
{
	cout << "\n================== HE THONG CHUC NANG =======================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xuat chuoi";
	cout << "\n3. Chuyen ky tu thuong";
	cout << "\n4. Chuyen ky tu HOA";
	cout << "\n5. Dao nguoc chuoi";
	cout << "\n6. Kiem tra chuoi doi xung";
	cout << "\n7. Dem so luong ky tu x trong chuoi";
	cout << "\n8. Tim vi tri xuat hien dau tien cua x";
	cout << "\n9. Dem so tu trong chuoi";
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

void XuLyMenu(int menu, String str)
{
	char x;
	int kq;

	system("cls");
	switch (menu)
	{
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Nhap chuoi";
			NhapChuoi(str);
			cout << "\nChuoi vua nhap la : ";
			XuatChuoi(str);
			break;

		case 2:
			cout << "\n2. Xuat chuoi";
			XuatChuoi(str);
			break;

		case 3:
			cout << "\n3. Chuyen ky tu thuong";
			cout << "\nChuoi truoc khi chuyen : ";
			XuatChuoi(str);

			Chuyen_KT_thuong(str);
			cout << "\nChuoi sau khi chuyen: ";
			XuatChuoi(str);
			break;

		case 4:
			cout << "\n4. Chuyen ky tu HOA";
			cout << "\nChuoi truoc khi chuyen : ";
			XuatChuoi(str);

			Chuyen_KT_HOA(str);
			cout << "\nChuoi sau khi chuyen: ";
			XuatChuoi(str);
			break;

		case 5:
			cout << "\n5. Dao nguoc chuoi";
			cout << "\nChuoi truoc khi dao : ";
			XuatChuoi(str);

			DaoNguocChuoi(str);
			cout << "\nChuoi sau khi dao: ";
			XuatChuoi(str);
			break;
		case 6:
			cout << "\n6. Kiem tra chuoi doi xung";
			cout << "\nChuoi da nhap: ";
			XuatChuoi(str);
			if (KiemTraDoiXung(str))
				cout << "\nChuoi vua nhap doi xung.";
			else
				cout << "\nChuoi vua nhap khong doi xung.";
			break;

		case 7:
			cout << "\n7. Dem so luong ky tu x trong chuoi";
			cout << "\nChuoi da nhap: ";
			XuatChuoi(str);
			
			cout << "\nNhap vao 1 ky tu: ";
			cin >> x;

			kq = DemSoLanXuatHien_X(str, x);
			cout << "\nSo lan xuat hien cua ky tu " << x << " trong chuoi la: " << kq;
			break;

		case 8:
			cout << "\n8. Tim vi tri xuat hien dau tien cua x";
			cout << "\nChuoi da nhap: ";
			XuatChuoi(str);

			cout << "\nNhap vao 1 ky tu: ";
			cin >> x;

			kq = ViTri_DauTien_X(str, x);

			if (kq == -1)
				cout << "\nKhong tim thay ky tu " << x << " trong chuoi.";
			else
				cout << "\nVi tri xuat hien dau tien cua ky tu " << x << " la: " << kq;

			break;

		case 9:
			cout << "\n9. Dem so tu trong chuoi";
			break;

	}
	_getch();
}




