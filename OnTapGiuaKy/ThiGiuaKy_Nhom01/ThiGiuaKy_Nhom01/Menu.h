
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, String a);

void XuatMenu()
{
	cout << "\n=============== HE THONG CHUC NANG ==================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap xau ky tu";
	cout << "\n2. Xem xau ky tu";
	cout << "\n3. Tinh chieu dai xau ky tu";
	cout << "\n4. Dem so lan xuat hien cua X";
	cout << "\n5. Chuyen xau ky tu";
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

void XuLyMenu(int menu, String a)
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
		cout << "\n1. Nhap xau ky tu";
		NhapXauKyTu(a);
		cout << "\nXau ky tu vua nhap: ";
		XuatXauKyTu(a);
		break;

	case 2:
		cout << "\n2. Xem xau ky tu";
		cout << "\nXau ky tu hien tai: ";
		XuatXauKyTu(a);
		break;

	case 3:
		cout << "\n3. Tinh chieu dai xau ky tu";
		cout << "\nXau ky tu hien tai: ";
		XuatXauKyTu(a);
		kq = TinhChieuDai(a);
		cout << "\nChieu dai xau ky tu la : " << kq;
		break;

	case 4:
		cout << "\n5. Dem so lan xuat hien cua X";

		cout << "\nNhap vao ky tu x: ";
		cin >> x;
		kq = DemSoLanXuatHien_X(a, x);
		cout << "\nSo lan xuat hien cua phan tu x trong a la " << kq;
		cout << "\nXem lai xau ky tu de kiem tra: ";
		XuatXauKyTu(a);
		break;

	case 5:
		cout << "\n5. Chuyen xau ky tu";
		cout << "\nXau ky tu ban dau: ";
		XuatXauKyTu(a);
		ChuyenXauKyTu(a);
		cout << "\nXau ky tu sau khi chuyen doi: ";
		XuatXauKyTu(a);
		break;

	}
	_getch();
}







