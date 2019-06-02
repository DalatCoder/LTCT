void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, NhanVien a[MAX], int &n);

void XuatMenu()
{
	cout << "\n=========== HE THONG CHUC NANG ============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap du lieu tu file";
	cout << "\n2. Xuat du lieu ra man hinh";
	cout << "\n3. Tim kiem thong tin nhan vien theo ma so";
	cout << "\n4. Tim kiem thong tin nhan vien co muc luong >= X";
	cout << "\n===========================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls"); // Linux
		XuatMenu();
		cout << "\nChon chuc nang tuong ung tu 1 .. " << soMenu << " : ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, NhanVien a[MAX], int &n)
{
	char duongDan[MAX];
	char maSo[7];
	int kq;
	int VT;
	double X;

	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap du lieu tu file";
		cout << "\nNhap vao duong dan de mo tap tin: ";
		cin >> duongDan;

		kq = DocDuLieuNhanVien(a, n, duongDan);

		if (kq == 0)
			cout << "\nMo tap tin khong thanh cong.";
		else
		{
			cout << "\nMo tap tap tin thanh cong. So nhan vien hien tai la: " << n;
			cout << "\n DANH SACH NHAN VIEN VUA DOC TU TAP TIN.\n";
			XuatDanhSachNhanVien(a, n);
		}
			
		break;

	case 2:
		cout << "\n2. Xuat du lieu ra man hinh";
		cout << "\n======== DANH SACH NHAN VIEN HIEN TAI============\n";
		XuatDanhSachNhanVien(a, n);
		cout << "\nSo nhan vien hien tai co trong danh sach la: " << n << endl;

		break;

	case 3:
		cout << "\n3. Tim kiem thong tin nhan vien theo ma so";
		cout << "\nNhap vao ma so nhan vien can tim kiem: ";
		cin >> maSo;

		VT = Tim_NV_MaSo(a, n, maSo);

		if (VT == -1)
			cout << "\nKhong tim thay nhan vien co ma so " << maSo << " trong danh sach nhan vien.";
		else
		{
			cout << "\nTim thay nhan vien trong danh sach\n";
			XuatTieuDe();
			Xuat_1_NhanVien(a[VT]);
			XuatDuongKe('=');
		}

		break;

	case 4:
		cout << "\n4. Tim kiem thong tin nhan vien co muc luong >= X";
		cout << "\nNhap vao muc luong toi thieu: ";
		cin >> X;
		Tim_NV_Luong(a, n, X);

		break;
	}

	_getch();
}

