
void XuatMenu(unsigned int n);
int ChonMenu(int soMenu, unsigned int n);
void XuLyDuLieu(int menu, unsigned int n);


/*
	Định nghĩa hàm xuất menu để xuất các tùy chọn chức năng lên màn hình
	Input: n = so nguyen duong do nguoi dung nhap vao
	Output: không
*/
void XuatMenu(unsigned int n)
{
	cout << "\n=========== CHUONG TRINH UOC SO ============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Xuat tat ca cac uoc so cua " << n;
	cout << "\n2. Dem so luong cac uoc so cua " << n;
	cout << "\n3. Tinh tong cac uoc so cua " << n;
	cout << "\n4. Tim so lon nhat nho hon hoac bang " << n << " ma la luy thua cua 2";
	cout << "\n5. Kiem tra so hoan hao";
	cout << "\n============================================\n";
}

/*
	Dinh nghia ham chon menu
	Input: 
		soMenu = so luong menu co san
		n = so nguyen duong
	Output:
		stt = so thu tu cua menu duoc chon
*/
int ChonMenu(int soMenu, unsigned int n)
{
	int stt = -1;

	while (stt < 0 || stt > soMenu)
	{
		system("cls");
		XuatMenu(n);
		cout << "\nChon chuc nang tuong ung : ";
		cin >> stt;
	}

	return stt;
}

/*
	Dinh nghia ham xu ly du lieu
	Input:
		stt = so thu tu cua menu duoc chon
		n = so nguyen duong
	Output: khong
*/
void XuLyDuLieu(int menu, unsigned int n)
{
	switch (menu)
	{
		int x;
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Xuat tat ca cac uoc so cua " << n;
			XuatUocSo(n);
			break;
		case 2:
			cout << "\n2. Dem so luong cac uoc so cua " << n;
			x = DemUocSo(n);
			cout << "\nSo luong uoc so cua " << n << " la " << x;
			break;
		case 3:
			cout << "\n3. Tinh tong cac uoc so cua " << n;
			x = TinhTongUocSo(n);
			cout << "\nTong cac uoc so cua " << n << " la : " << x;
			break;
		case 4:
			cout << "\n4. Tim so lon nhat nho hon hoac bang " << n << " ma la luy thua cua 2";
			x = TimSoLonNhat(n);
			cout << "\nSo lon nhat thoa dieu kien la " << x;
			break;
		case 5:
			cout << "\n5. Kiem tra so hoan hao";
			if (LaSoHoanHao(n))
				cout << "\n" << n << " la so hoan hao";
			else
				cout << "\n" << n << " khong phai la so hoan hao";
			break;
	}
	_getch();
}

