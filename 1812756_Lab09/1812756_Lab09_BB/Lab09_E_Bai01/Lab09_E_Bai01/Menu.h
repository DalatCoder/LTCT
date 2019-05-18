
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int *arr, int &n);

void XuatMenu()
{
	cout << "\n=============== HE THONG CHUC NANG =================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap tu dong mang";
	cout << "\n2. Xem mang";
	cout << "\n3. Tinh gia tri lon nhat";
	cout << "\n4. Tinh tong cac phan tu cua mang";
	cout << "\n5. Dem cac so duong trong day";
	cout << "\n6. Dem so lan xuat hien cua x trong day";
	cout << "\n===================================================\n";
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

void XuLyMenu(int menu, int *arr, int &n)
{
	int kq, x;
	int *newArr = nullptr;

	system("cls");
	switch (menu)
	{
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Nhap tu dong mang";
			TaoMangTuDong(arr, n);
			cout << "\nMang tu dong vua duoc tao...\n";
			XuatMang(arr, n);
			break;

		case 2:
			cout << "\n2. Xem mang";
			cout << "\nMang hien hanh: \n";
			XuatMang(arr, n);
			break;

		case 3:
			cout << "\n3. Tinh gia tri lon nhat";
			kq = TinhMax(arr, n);
			cout << "\nGia tri lon nhat trong mang la : " << kq;
			cout << "\nXem lai mang hien hanh de kiem tra: \n";
			XuatMang(arr, n);
			break;

		case 4:
			cout << "\n4. Tinh tong cac phan tu cua mang";
			kq = TinhTong(arr, n);
			cout << "\nTong cac phan tu cua mang la: " << kq;
			cout << "\nXem lai mang de kiem tra :\n";
			XuatMang(arr, n);
			break;

		case 5:
			cout << "\n5. Dem cac so duong trong day";
			kq = DemSoDuong(arr, n);
			newArr = TaoMangSoDuong(arr, n);

			cout << "\nSo luong so duong trong mang la: " << kq;
			cout << "\nMang so duong : \n";
			XuatMang(newArr, kq);

			cout << "\nXem lai mang de kiem tra:\n";
			XuatMang(arr, n);

			break;

		case 6:
			cout << "\n6. Dem so lan xuat hien cua x trong day";
			cout << "\nMang hien hanh: \n";
			XuatMang(arr, n);
			cout << "\nNhap vao 1 phan tu de dem so lan xuat hien: ";
			cin >> x;
			kq = Dem_X(arr, n, x);
			cout << "\nSo lan xuat hien cua phan tu " << x << " la : " << kq;
			break;
	}

	delete[] newArr;
	_getch();
}




