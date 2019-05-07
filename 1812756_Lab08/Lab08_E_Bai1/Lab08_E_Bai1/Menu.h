
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
		break;
	case 4:
		cout << "\n4. Xuat bang diem sinh vien theo tung lop";
		break;
	case 5:
		cout << "\n5. Sap bang diem sinh vien giam dan theo DTB";
		break;
	case 6:
		cout << "\n6. Sap bang diem tang dan theo ten - MSSV";
		break;
	case 7:
		cout << "\n7. Tim thong tin sinh vien theo ten";
		break;
	case 8:
		cout << "\n8. Tim thong tin sinh vien co DTB cao nhat";
		break;
	case 9:
		cout << "\n9. Xep loai hoc luc cua sinh vien";
		break;
	}

	_getch();
}



