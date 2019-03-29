
// Khai bao nguyen mau ham
void XuatMenu(unsigned int n);
int ChonMenu(int soMenu, unsigned int n);
void XuLyMenu(int soMenu, unsigned int n);

// Phan dinh nghia ham

/*
	Dinh nghia ham xuat menu: xuat cac menu chuc nang
	Input: n = 1 so nguyen duong
	Output: khong
*/
void XuatMenu(unsigned int n)
{
	cout << "\n============ BANG CHON CHUC NANG ===============\n";
	cout << "\n0. Thoat chuong trinh.";
	cout << "\n1. Xuat cac so tu 1.." << n;
	cout << "\n2. So chia het cho 3 - khong chia het cho 4 trong doan 1.." << n;
	cout << "\n3. Dem so luong chu so cua " << n;
	cout << "\n4. Dao nguoc so " << n;
	cout << "\n5. Tinh tong cac chu so trong " << n;
	cout << "\n6. Cho biet chu so dau tien cua " << n;
	cout << "\n7. Xuat cac so hoan chinh trong pham vi 1.." << n;
	cout << "\n8. Tim so nguyen m de tong 1+2+...+m <= " << n;
	cout << "\n================================================";
}

/*
	Dinh nghia ham chon menu
	Input:
		soMenu = so luong menu co san
	Output:
		stt = menu duoc chon
*/
int ChonMenu(int soMenu, unsigned int n)
{
	int stt = -1;

	while (stt < 0 || stt > soMenu)
	{
		system("cls");
		XuatMenu(n);
		cout << "\nXin moi chon chuc nang: ";
		cin >> stt;
	}

	return stt;
}

/*
	Dinh nghia ham xu ly cac truong hop cua menu
	Input:
		stt: so thu tu cua menu duoc chon
		n : mot so nguyen duong
	Output:
		Khong
*/
void XuLyMenu(int soMenu, unsigned int n)
{
	int dem;
	switch (soMenu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Xuat cac so tu 1.." << n;
		XuatDaySo(n);
		break;
	case 2:
		cout << "\n2. So chia het cho 3 - khong chia het cho 4 trong doan 1.." << n;
		dem = demSoThoaDieuKien(n);
		cout << "\nSo luong so trong doan 1.." << n
			<< " chia het cho 3 nhung khong chia het cho 4 la " << dem;
		break;
	case 3:
		cout << "\n3. Dem so luong chu so cua " << n;
		dem = demSoLuongChuSo(n);
		cout << "\nSo " << n << " co " << dem << " chu so.";
		break;
	case 4:
		cout << "\n4. Dao nguoc so " << n;
		dem = DaoNguocSo(n);
		cout << "\nSo dao nguoc cua " << n << " la: " << dem;
		break;
	case 5:
		cout << "\n5. Tinh tong cac chu so trong " << n;
		dem = TongCacChuSo(n);
		cout << "\nTong cac chu so cua " << n << " la : " << dem;
		break;
	case 6:
		cout << "\n6. Cho biet chu so dau tien cua " << n;
		dem = TimChuSoDauTien(n);
		cout << "\nChu so dau tien cua " << n << " la : " << dem;
		break;
	case 7:
		cout << "\n7. Xuat cac so hoan chinh trong pham vi 1.." << n;
		XuatSoHoanChinh(n);
		break;
	case 8:
		cout << "\n8. Tim so nguyen m de tong 1+2+...+m <= " << n;
		dem = TimSoNguyenThoaDieuKien(n);
		cout << "\n1 + 2 + ... + " << dem << " <= " << n;
		break;
	}

	// Dung chuong trinh
	_getch();
}


