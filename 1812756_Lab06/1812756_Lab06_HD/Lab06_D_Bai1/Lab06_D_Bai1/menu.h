
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int &n);

void XuatMenu()
{
	cout << "\n====================== CHON CHUC NANG ========================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap ma tran vuong";
	cout << "\n2. Xem ma tran vuong";
	cout << "\n3. Tinh tong cac phan tu cua ma tran";
	cout << "\n4. Xuat cac phan tu thuoc duong cheo chinh";
	cout << "\n5. Xuat cac phan tu thuoc duong cheo phu";
	cout << "\n6. Tinh tong cac phan tu nam phia tren duong cheo chinh";
	cout << "\n7. Tinh tong cac phan tu nam phia duoi duong cheo phu";
	cout << "\n8. Xuat cac duong cheo song song duong cheo chinh";
	cout << "\n9. Xuat cac duong cheo song song duong cheo phu";
	cout << "\n==============================================================\n";
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

void XuLyMenu(int menu, MaTranVuong a, int &n)
{
	int sum, p;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap ma tran vuong";
		cout << "\nNhap cap ma tran vuong n = ";
		cin >> n;
		NhapMaTran(a, n);
		cout << "\nMa tran vuong vua nhap:\n";
		XuatMaTran(a, n);
		break;
	case 2:
		cout << "\n2. Xem ma tran vuong";
		cout << "\nMa tran vuong hien hanh:\n";
		XuatMaTran(a, n);
		break;
	case 3:
		cout << "\n3. Tinh tong cac phan tu cua ma tran";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		sum = TinhTong_MaTran(a, n);
		cout << "\nTong cac phan tu cua ma tran : sum = " << sum;
		break;
	case 4:
		cout << "\n4. Xuat cac phan tu thuoc duong cheo chinh";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		cout << "\nCac phan tu thuoc duong cheo chinh cua a:\n";
		XuatDuongCheoChinh(a, n);
		break;
	case 5:
		cout << "\n5. Xuat cac phan tu thuoc duong cheo phu";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		cout << "\nCac phan tu thuoc duong cheo phu cua a:\n";
		XuatDuongCheoPhu(a, n);
		break;
	case 6:
		cout << "\n6. Tinh tong cac phan tu nam phia tren duong cheo chinh";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		sum = TinhTong_Tren_CheoChinh(a, n);
		cout << "\nTong cac phan tu phia tren duong cheo chinh: sum = " << sum;
		break;
	case 7:
		cout << "\n7. Tinh tich cac phan tu nam phia duoi duong cheo phu";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		p = TinhTich_Duoi_CheoPhu(a, n);
		cout << "\nTich cac phan tu phia duoi duong cheo phu: p = " << p;
		break;
	case 8:
		cout << "\n8. Xuat cac duong cheo song song duong cheo chinh";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		Xuat_DuongCheo_SS_DCChinh(a, n);
		break;
	case 9:
		cout << "\n9. Xuat cac duong cheo song song duong cheo phu";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, n);
		Xuat_DuongCheo_SS_DCPhu(a, n);
	}
	_getch();
}


