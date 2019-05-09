
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, SinhVien sv[MAX], int &n);

void XuatMenu()
{
	cout << "\n================== HE THONG CHUC NANG ==================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Tao bang diem sinh vien";
	cout << "\n2. Xem bang diem sinh vien";
	cout << "\n3. Xem bang diem day du";
	cout << "\n4. Xuat bang diem sinh vien theo tung lop";
	cout << "\n5. Sap bang diem sinh vien giam dan theo DTB";
	cout << "\n6. Sap bang diem tang dan theo ten - MSSV";
	cout << "\n7. Tim thong tin sinh vien theo ten";
	cout << "\n8. Tim thong tin sinh vien co DTB cao nhat";
	cout << "\n9. Xep loai hoc luc cua sinh vien";
	cout << "\n===========================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,.." << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	} 

	return stt;
}

void XuLyMenu(int menu, SinhVien sv[MAX], int &n)
{
	char ten[10];
	SinhVien kq;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Tao bang diem sinh vien";
		Nhap_DSSV(sv, n);
		cout << "\nDanh sach sinh vien hien tai:\n";
		Xuat_DSNV(sv, n);
		break;
	case 2:
		cout << "\n2. Xem bang diem sinh vien";
		Xuat_DSNV(sv, n);
		break;
	case 3:
		cout << "\n3. Xem bang diem day du";
		XepLoai(sv, n);
		Xuat_DSNV(sv, n);
		break;
	case 4:
		cout << "\n4. Xuat bang diem sinh vien theo tung lop";
		XuatSinhVienTheoLop(sv, n);
		break;
	case 5:
		cout << "\n5. Sap bang diem sinh vien giam dan theo DTB";
		cout << "\nBang diem hien hanh:\n";
		Xuat_DSNV(sv, n);
		GiamDan_DTB(sv, n);
		cout << "\nBang diem sau khi sap xep:\n";
		Xuat_DSNV(sv, n);
		break;
	case 6:
		cout << "\n6. Sap bang diem tang dan theo ten - MSSV";
		cout << "\nBang diem hien hanh:\n";
		Xuat_DSNV(sv, n);
		TangDan_Ten_MSSV(sv, n);
		cout << "\nBang diem sau khi sap xep:\n";
		Xuat_DSNV(sv, n);
		break;
	case 7:
		cout << "\n7. Tim thong tin sinh vien theo ten";
		cout << "\nBang diem hien hanh:\n";
		Xuat_DSNV(sv, n);
		cout << "\nNhap ten sinh vien: ";
		cin.ignore(MAX, '\n');
		gets_s(ten, 10);
		TimTenSinhVien(sv, n, ten);
		break;
	case 8:
		cout << "\n8. Tim thong tin sinh vien co DTB cao nhat";
		cout << "\nBang diem hien hanh:\n";
		Xuat_DSNV(sv, n);
		kq = DiemTBCaoNhat(sv, n);
		cout << "\nSinh vien co diem trung binh cao nhat la: \n";
		XuatTieuDe();
		Xuat_1SV(kq);
		XuatKeNgang(1);
		break;
	case 9:
		cout << "\n9. Xep loai hoc luc cua sinh vien";
		cout << "\nBang diem hien hanh:\n";
		Xuat_DSNV(sv, n);
		cout << "\nBang diem sau khi xep loai:\n";
		XepLoai(sv, n);
		Xuat_DSNV(sv, n);
		break;
	}

	_getch();
}



