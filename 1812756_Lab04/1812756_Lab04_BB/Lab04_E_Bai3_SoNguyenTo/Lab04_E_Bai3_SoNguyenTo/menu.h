
void XuatMenu(unsigned int n);
int ChonMenu(int soMenu, unsigned int n);
void XuLyMenu(int menu, unsigned int n);


/*
	Dinh nghia ham xuat menu de xuat cac chuc nang len man hinh
	Input: n = 1 so nguyen duong
	Output: khong
*/
void XuatMenu(unsigned int n)
{
	cout << "\n============= CHUONG TRINH SO NGUYEN TO =============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Kiem tra so nguyen to";
	cout << "\n2. Xuat cac so nguyen to tu 1 .. " << n;
	cout << "\n3. Dem so luong SNT tu 1 .. " << n;
	cout << "\n4. Tinh tong cac uoc so nguyen to cua " << n;
	cout << "\n5. Phan tich " << n << " thanh tich cac thua so nguyen to";
	cout << "\n======================================================\n";
}

/*
	Dinh nghia ham chon menu
	Input: 
		soMenu = so luong menu co san
		n = 1 so nguyen duong co san
	Output: stt  = so thu tu cua menu duoc lua chon
*/
int ChonMenu(int soMenu, unsigned int n)
{
	int stt = -1;

	while (stt < 0 || stt > soMenu)
	{
		system("cls");
		XuatMenu(n);
		cout << "\nNhap chuc nang tuong ung : ";
		cin >> stt;
	}
	return stt;
}

/*
	Dinh nghia ham xu ly menu
	Input:
		menu = menu duoc chon
		n = 1 so nguyen duong
	Output:
		khong
*/
void XuLyMenu(int menu, unsigned int n)
{
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Kiem tra so nguyen to";
		if (LaSoNguyenTo(n))
			cout << "\n" << n << " la so nguyen to";
		else
			cout << "\n" << n << " khong phai la so nguyen to";
		break;
	case 2:
		cout << "\n2. Xuat cac so nguyen to tu 1 .. " << n;
		XuatSNT(n);
		break;
	case 3:
		cout << "\n3. Dem so luong SNT tu 1 .. " << n;
		cout << "\nCo " << demSNT(n) << " so nguyen to trong pham vi [1.." << n << "].";
		break;
	case 4:
		cout << "\n4. Tinh tong cac uoc so nguyen to cua " << n;
		cout << "\nTong cac uoc so nguyen to cua " << n << " la : " << TinhTongUocSNT(n);
		break;
	case 5:
		cout << "\n5. Phan tich " << n << " thanh tich cac thua so nguyen to";
		PhanTichThuaSo(n);
		break;
	}

	// Dung chuong trinh va cho nguoi dung nhan vao 1 phim bat ky
	_getch();
}




