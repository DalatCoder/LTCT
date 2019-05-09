
void XuatMenu()
{
	cout << "\n============== HE THONG CHUC NANG ==================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Chuyen thanh ky tu thuong";
	cout << "\n4. Chuyen thanh ky tu hoa";
	cout << "\n5. Dao nguoc chuoi";
	cout << "\n6. Kiem tra chuoi doi xung";
	cout << "\n====================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang: ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}

	return stt;
}

void XuLyMenu(int menu, String str)
{
	system("cls");
	
	switch (menu)
	{
		case 0:
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			cout << "\n1. Nhap chuoi";
			break;
		case 2:
			cout << "\n2. Xem chuoi";
			break;
		case 3:
			cout << "\n3. Chuyen thanh ky tu thuong";
			break;
		case 4:
			cout << "\n4. Chuyen thanh ky tu hoa";
			break;
		case 5:
			cout << "\n5. Dao nguoc chuoi";
			break;
		case 6:
			cout << "\n6. Kiem tra chuoi doi xung";
			break;
	}
	_getch();
}


