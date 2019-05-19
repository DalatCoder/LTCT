
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
	int kq;
	char *t = new char[MAX];
	char x;

	system("cls");
	switch (menu)
	{
		case 0:
			cout << "\n0. Thoat chuong trinh";
			delete[] t;
			break;
		case 1:
			cout << "\n1. Nhap chuoi";
			NhapChuoi(str);
			cout << "\nChuoi vua nhap la: ";
			XuatChuoi(str);
			break;

		case 2:
			cout << "\n2. Dem so khoang trang";
			kq = Dem_X(str, ' ');
			cout << "\nSo khoang trang trong chuoi: " << kq;
			cout << "\nXem lai mang de kiem tra: ";
			XuatChuoi(str);
			break;

		case 3:
			cout << "\n3. Tim vi tri xuat hien cua chuoi t trong chuoi s";
			cout << "\nNhap chuoi t\n";
			NhapChuoi(t);
			kq = ViTri_T_X(str, t);
			if (kq == -1)
				cout << "\nChuoi \"" << t << "\" khong ton tai.";
			else
				cout << "\nVi tri xuat hien chuoi \"" << t << "\" la : " << kq;
			cout << "\nXem lai mang de kiem tra: \n";
			XuatChuoi(str);
			break;

		case 4:
			cout << "\n4. Tim vi tri xuat hien dau tien cua ky tu X";
			cout << "\nXem lai mang: \n";
			XuatChuoi(str);
			cout << "\nNhap vao 1 ky tu: ";
			cin >> x;
			kq = ViTri_X(str, x);
			if (kq == -1)
				cout << x << " khong ton tai trong chuoi.";
			else
				cout << "Vi tri \'" << x << "\' xuat hien trong chuoi la: " << kq;
			break;

		case 5:
			cout << "\n5. Dao vi tri cua tu dau va tu cuoi";
			cout << "\nChuoi ban dau: \n";
			XuatChuoi(str);
			DaoTu(str);
			cout << "\nChuoi sau khi dao: \n";
			XuatChuoi(str);
			break;

		case 6:
			cout << "\n6. Doi ky tu dau tien thanh HOA, con lai chu thuong";
			cout << "\nChuoi ban dau: \n";
			XuatChuoi(str);
			ChuyenXau(str);
			cout << "\nChuoi sau khi chuyen: \n";
			XuatChuoi(str);
			break;
		case 7:
			cout << "\n7. Liet ke tung ky tu va so lan xuat hien";
			LietKe_KyTu(str);
			break;

		case 8:
			cout << "\n8. Dem so tu trong chuoi s";
			break;
	}
	_getch();
}



