
void XuatMenu()
{
	cout << "\n=============== HE THONG CHUC NANG ==================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap tu dong ma tran";
	cout << "\n2. Xem ma tran";
	cout << "\n3. Cong ma tran";
	cout << "\n4. Tru ma tran";
	cout << "\n5. Nhan ma tran";
	cout << "\n=====================================================\n";
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

void XuLyMenu(int menu, int *a, int *b, int n)
{
	int *c;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap tu dong ma tran";
		TaoMaTran_TuDong(a, n);
		TaoMaTran_TuDong(b, n);
		cout << "\nMa tran a:";
		XuatMaTran(a, n);
		cout << "\nMa tran b:";
		XuatMaTran(b, n);
		break;

	case 2:
		cout << "\n2. Xem ma tran";
		cout << "\nMa tran a:";
		XuatMaTran(a, n);
		cout << "\nMa tran b:";
		XuatMaTran(b, n);
		break;

	case 3:
		cout << "\n3. Cong ma tran";
		c = TinhTong_2_MaTran(a, b, n);
		cout << "\nMa tran a:";
		XuatMaTran(a, n);
		cout << "\nMa tran b:";
		XuatMaTran(b, n);
		cout << "\nTong 2 ma tran:";
		XuatMaTran(c, n);
		delete[] c;
		break;

	case 4:
		cout << "\n4. Tru ma tran";
		c = TinhHieu_2_MaTran(a, b, n);
		cout << "\nMa tran a:";
		XuatMaTran(a, n);
		cout << "\nMa tran b:";
		XuatMaTran(b, n);
		cout << "\nHieu 2 ma tran:";
		XuatMaTran(c, n);
		delete[] c;
		break;

	case 5:
		cout << "\n5. Nhan ma tran";
		c = TinhTich_2_MaTran(a, b, n);
		cout << "\nMa tran a:";
		XuatMaTran(a, n);
		cout << "\nMa tran b:";
		XuatMaTran(b, n);
		cout << "\nTich 2 ma tran:";
		XuatMaTran(c, n);
		delete[] c;
		break;
	}

	_getch();
}



