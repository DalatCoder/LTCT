
void XuatMenu();
int  ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);


void XuatMenu()
{
	cout << "\n================== CHON CHUC NANG ===================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Xuat ra man hinh tong tat ca cac uoc so cua n";
	cout << "\n2. Xuat ra man hinh n so nguyen to dau tien";
	cout << "\n4. Dem so luong cac chu so cua n";
	cout << "\n5. Tinh cac chu so trong n";
	cout << "\n6. Xac dinh chu so cuoi cung trong n";
	cout << "\n=====================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	do
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang >> ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);

	return stt;
}

void XuLyMenu(int menu, unsigned int n)
{
	int kq;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Xuat ra man hinh tong tat ca cac uoc so cua n";
		kq = TongCacUocSo(n);
		cout << "\nTong cac uoc so cua " << n << " la : " << kq;
		break;
	case 2:
		cout << "\n2. Xuat ra man hinh n so nguyen to dau tien";
		cout << "\n" << n << " so nguyen to dau tien : \n";
		XuatNSoNguyenToDauTien(n);
		break;
	case 4:
		cout << "\n4. Dem so luong cac chu so cua n";
		kq = DemSo(n);
		cout << "\nSo luong cac chu so cua " << n << " la : " << kq;
		break;
	case 5:
		cout << "\n5. Tinh tich cac chu so trong n";
		kq = TichCacChuSo(n);
		cout << "\nTich cac chu so trong " << n << " la : " << kq;
		break;
	case 6:
		cout << "\nChu so cuoi cung cua n la " << ChuSoCuoiCung(n);
		break;
	}

	_getch();
}




