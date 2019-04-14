


void XuatMenu()
{
	cout << "\n====================== CHON CHUC NANG =========================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap ma tran chu nhat m x n";
	cout << "\n2. Xem ma tran chu nhat";
	cout << "\n3. tinh gia tri lon nhat cua ma tran";
	cout << "\n4. Tinh gia tri lon nhat hang i";
	cout << "\n5. Tinh tong cac phan tu hang i";
	cout << "\n6. Tinih gia tri nho nhat cot j";
	cout << "\n7. Tinh tich cac phan tu cot j";
	cout << "\n8. Xuat aij : lon nhat hang 1 va nho nhat cot j";
	cout << "\n================================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	do
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang : ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);

	return stt;
}

void XuLyMenu(int menu, int a[SIZE][SIZE], int &m, int &n)
{
	int kq, i;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap ma tran chu nhat m x n";
		cout << "\nNhap so hang : m = ";
		cin >> m;
		cout << "\nNhap so cot : n = ";
		cin >> n;
		NhapTuDong(a, m, n);
		cout << "\nMa tran vua nhap:\n";
		XuatMaTran(a, m, n);
		break;
	case 2:
		cout << "\n2. Xem ma tran chu nhat";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		break;
	case 3:
		cout << "\n3. tinh gia tri lon nhat cua ma tran";
		kq = Tinh_Max_MaTran(a, m, n);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		cout << "\nMax(a) = " << kq;
		break;
	case 4:
		cout << "\n4. Tinh gia tri lon nhat hang i";
		do
		{
			cout << "\nChon hang i (0 <= i <=" << m - 1 << ") : i = ";
			cin >> i;
		} while (i < 0 || i > m - 1);
		kq = Tinh_Max_Hang_i(a, i, n);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		cout << "\nMax(hang " << i << ") = " << kq;
		break;
	case 5:
		cout << "\n5. Tinh tong cac phan tu hang i";
		do
		{
			cout << "\nChon hang i (0 <= i <=" << m - 1 << ") : i = ";
			cin >> i;
		} while (i < 0 || i > m - 1);
		kq = Tinh_Tong_Hang_i(a, i, n);
		cout << "\nMa tran hien hanh:\n";
		cout << "\nTong(hang " << i << ") = " << kq;
		break;
	case 6:
		cout << "\n6. Tinh gia tri nho nhat cot j";
		break;
	case 7:
		cout << "\n7. Tinh tich cac phan tu cot j";
		break;
	case 8:
		cout << "\n8. Xuat aij : lon nhat hang 1 va nho nhat cot j";
		break;
	}
	_getch();
}



