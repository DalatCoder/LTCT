
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

void XuLyMenu(int menu, int *matrix, int &n)
{
	system("cls");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap tu dong ma tran";
		NhapMaTran_TuDong(matrix, n);
		cout << "\nMa tran vua nhap: \n";
		XuatMaTran(matrix, n);
		break;

	case 2:
		cout << "\n2. Xem ma tran";
		cout << "\nMa tran hien hanh: \n";
		XuatMaTran(matrix, n);
		break;

	case 3:
		cout << "\n3. Cong ma tran";
		break;
	case 4:
		cout << "\n4. Tru ma tran";
		break;
	case 5:
		cout << "\n5. Nhan ma tran";
		break;
	}
	_getch();
}



