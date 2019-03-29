void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

/*
	Dinh nghia ham xuat menu: xuat danh sach chuc nang ra man hinh
*/
void XuatMenu()
{
	cout << endl << "============ CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Tinh dien tich hinh vuong";
	cout << endl << "2. Tinh dien tich hinh chu nhat";
	cout << endl << "3. Tinh dien tich hinh tam giac";
	cout << endl << "4. Tinh dien tich hinh tron";
	cout << endl << "=========================================";
}

/*
	Dinh nghia ham chon chuc nang cho menu
	Input: so menu = so luong menu co the chon
	Output: so thu tu menu do nguoi dung nhap vao
*/
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap vao 1 so de chon menu (0 <= stt <= " << soMenu << " ) : stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

/*
	Dinh nghia ham xu ly menu tuy thuoc vao chuc nang
	Input: menu = so thu tu menu do nguoi chon
	Output: khong co
*/
void XuLyMenu(int menu)
{
	// Khai bao cac bien
	double a, b, c, r, dienTich;
	switch (menu)
	{
	case 0:
		cout << endl << "0. Thoat khoi chuong trinh";
		_getch(); // Dung chuong trinh
		break;
	case 1:
		cout << endl << "1. Tinh dien tich hinh vuong";
		// Thong bao cho nguoi dung nhap do dai canh
		cout << endl << "Nhap do dai canh hinh vuong: ";
		cin >> a;

		// Goi ham tinh dien tich hinh vuong
		dienTich = DienTichHinhVuong(a);

		// Xuat ket qua
		cout << endl << "Dien tich hinh vuong canh " << a << " la " << dienTich;
		_getch(); // Dung chuong trinh
		break;
	case 2:
		cout << endl << "2. Tinh dien tich hinh chu nhat";
		// Thong bao cho nguoi dung nhap chieu dai va rong
		cout << endl << "Nhap chieu dai HCN: ";
		cin >> a;

		cout << endl << "Nhap chieu rong HCN: ";
		cin >> b;

		// Goi ham tinh dien tich hinh chu nhat
		dienTich = DienTichHinhChuNhat(a, b);

		// Xuat ket qua
		cout << endl << "Dien tich hinh chu nhat "
			<< " co chieu dai = " << a
			<< " chieu rong = " << b << " la " << dienTich;
		_getch(); // Dung chuong trinh
		break;
	case 3:
		cout << endl << "3. Tinh dien tich hinh tam giac";
		// Thong bao cho nguoi dung nhap chieu dai 3 canh
		cout << endl << "Nhap do dai canh a: ";
		cin >> a;

		cout << endl << "Nhap do dai canh b: ";
		cin >> b;

		cout << endl << "Nhap do dai canh c: ";
		cin >> c;

		// Goi ham tinh dien tich hinh tam giac
		dienTich = DienTichTamGiac(a, b, c);

		// Xuat ket qua
		cout << endl << "Dien tich hinh tam giac "
			<< " co 3 canh a = " << a << ", b = " << b
			<< ", c = " << c << " la " << dienTich;
		_getch(); // Dung chuong trinh
		break;
	case 4:
		cout << endl << "4. Tinh dien tich hinh tron";
		// Thong bao cho nguoi dung nhap do dai ban kinh
		cout << endl << "Nhap do dai ban kinh: ";
		cin >> r;

		// goi ham tinh dien tich hinh tron
		dienTich = DienTichHinhTron(r);

		// Xuat ket qua
		cout << endl << "Dien tich hinh tron co ban kinh " << r << " la " << dienTich;
		_getch(); // Dung chuong trinh
		break;
	}
}



