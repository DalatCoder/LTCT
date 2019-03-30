
void XuatMenu();
int  ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);

void XuatMenu()
{
	cout << "\n================== CHON CHUC NANG ===================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Kiem tra x nam trong mang a";
	cout << "\n2. Tim vi tri dau tien x xuat hien trong a";
	cout << "\n3. Kiem tra mang a la day tang";
	cout << "\n4. Tim phan tu lon nhat";
	cout << "\n5. Tim vi tri cuoi cung gia tri lon nhat xuat hien";
	cout << "\n6. Neu a chua x thi cung chua -x";
	cout << "\n7. Xem du lieu day so";
	cout << "\n8. Chon lai bo du lieu moi cho day so";
	cout << "\n=====================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt = -1;

	while (stt < 0 || stt > soMenu)
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
	}

	return stt;
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	int x, kq;
	system("cls");
	switch (menu)
	{	
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Kiem tra x nam trong mang a";
			cout << "\nNhap gia tri x: ";
			cin >> x;
			kq = ChuaX(a, n, x);

			system("cls");
			cout << "\nMang hien hanh:\n";
			XuatMang(a, n);
			if (kq)
				cout << "\nMang co chua " << x;
			else
				cout << "\nMang khong chua " << x;
			break;
		case 2:
			cout << "\n2. Tim vi tri dau tien x xuat hien trong a";
			cout << "\nNhap gia tri x: ";
			cin >> x;
			kq = Tim_VTDT_X(a, n, x);
			
			system("cls");
			cout << "\nMang hien hanh:\n";
			XuatMang(a, n);
			if (kq == -1)
				cout << "\nMang khong chua " << x;
			else
				cout << "\nVi tri dau tien " << x << " xuat hien trong a la: " << kq;
			break;
		case 3:
			cout << "\n3. Kiem tra mang a la day tang";
			kq = KiemTraMangTang(a, n);

			system("cls");
			cout << "\nMang hien hanh:\n";
			XuatMang(a, n);
			if (kq)
				cout << "\na la mang tang.";
			else
				cout << "\na khong phai mang tang.";
			break;
		case 4:
			cout << "\n4. Tim phan tu lon nhat";
			kq = TinhMax(a, n);

			system("cls");
			cout << "\nMang hien hanh:\n";
			XuatMang(a, n);
			cout << "\nMax[0,...," << n << "] = " << kq;
			break;
		case 5:
			cout << "\n5. Tim vi tri cuoi cung gia tri lon nhat xuat hien";
			kq = TimViTriMax_CuoiCung(a, n);

			system("cls");
			cout << "\nMang hien hanh:\n";
			XuatMang(a, n);
			cout << "\nVi tri xuat hien cuoi cung cua gia tri lon nhat la " << kq;
			break;
		case 6:
			cout << "\n6. Neu a chua x thi cung chua -x";
			kq = ChuaXChuaTruX(a, n);
			
			system("cls");
			cout << "\nMang hien hanh:\n";
			XuatMang(a, n);

			if (kq)
				cout << "\nPhat bieu dung.";
			else
				cout << "\nPhat bieu sai.";
			break;
		case 7:
			cout << "\n7. Xem du lieu day so";
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			break;
		case 8:
			cout << "\n8. Chon bo du lieu khac";
			cout << "\nNhap lai kich thuoc n: ";
			cin >> n;
			NhapTuDong(a, n);

			system("cls");
			cout << "\nDay so moi nhap:\n";
			XuatMang(a, n);
		}
	_getch();
}


