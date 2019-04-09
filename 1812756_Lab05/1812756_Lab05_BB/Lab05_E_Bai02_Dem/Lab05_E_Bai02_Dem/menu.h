
void XuatMenu();
int  ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int  &n);

void XuatMenu()
{
	cout << "\n=============== CHON CHUC NANG =================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap mang tu dong";
	cout << "\n2. Xuat mang";
	cout << "\n3. Dem so luong so co 3 chu so";
	cout << "\n4. Dem cac so nam ngoai pham vi";
	cout << "\n5. Dem so luong so chinh phuong";
	cout << "\n6. Dem so lan xuat hien cua phan tu x bat dau tu vi tri cho truoc";
	cout << "\n7. Dem so luong cac duong chay trong day";
	cout << "\n=================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	do
	{
		system("cls");
		XuatMenu();
		cout << "\nXin moi chon chuc nang : ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);

	return stt;
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	switch (menu)
	{	
		int kq, min, max, vt, x;
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Nhap mang tu dong";
			NhapMangTuDong(a, n);
			cout << "\nMang vua nhap: \n";
			XuatMang(a, n);
			break;
		case 2:
			cout << "\n2. Xuat mang\n";
			XuatMang(a, n);
			break;
		case 3:
			cout << "\n3. Dem so luong so co 3 chu so";
			kq = DemSoLuongSoCo3ChuSo(a, n);
			cout << "\nSo luong so co 3 chu so trong mang a la : " << kq;
			cout << "\nXem mang de kiem tra:\n";
			XuatMang(a, n);
			break;
		case 4:
			cout << "\n4. Dem cac so nam ngoai pham vi";
			cout << "\nNhap pham vi nho nhat: "; 
			cin >> min;
			cout << "\nNhap pham vi lon nhat: ";
			cin >> max;

			kq = DemSoNamNgoaiPhamVi(a, n, min, max);
			cout << "\nSo luong chu so nam ngoai pham vi [" << min << ".." << max << "] la " << kq;
			cout << "\nXem lai mang de kiem tra:\n";
			XuatMang(a, n);
			break;
		case 5:
			cout << "\n5. Dem so luong so chinh phuong";
			kq = DemSoChinhPhuong(a, n);
			cout << "\nSo luong so chinh phuong trong mang a la : " << kq;
			cout << "\nXem lai mang de kiem tra:\n";
			XuatMang(a, n);
			break;
		case 6:
			cout << "\n6. Dem so lan xuat hien cua phan tu x bat dau tu vi tri cho truoc";
			cout << "\nNhap vao 1 vi tri: ";
			cin >> vt;
			cout << "\nNhap vao 1 so bat ky: ";
			cin >> x;

			kq = SoLanXuatHien_X(a, n, x, vt);
			cout << "\nSo lan xuat hien cua x tu vi tri " << vt << " la: " << kq;
			cout << "\nXem lai mang de kiem tra:\n";
			XuatMang(a, n);
			break;
		case 7:
			cout << "\n7. Dem so luong cac duong chay trong day";
			// bo sung sau
			break;
	}
	_getch();
}

