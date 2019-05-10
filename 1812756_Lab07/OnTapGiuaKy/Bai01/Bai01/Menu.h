
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, String str);

void XuatMenu()
{
	cout << "\n================== HE THONG CHUC NANG =======================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xuat chuoi";
	cout << "\n3. Chuyen ky tu thuong";
	cout << "\n4. Chuyen ky tu HOA";
	cout << "\n5. Dao nguoc chuoi";
	cout << "\n6. Kiem tra chuoi doi xung";
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
		NhapChuoi(str);
		cout << "\nChuoi vua nhap la : ";
		XuatChuoi(str);
		break;

	case 2:
		cout << "\n2. Xuat chuoi";
		XuatChuoi(str);
		break;

	case 3:
		cout << "\n3. Chuyen ky tu thuong";
		cout << "\nChuoi truoc khi chuyen : ";
		XuatChuoi(str);

		Chuyen_KT_thuong(str);
		cout << "\nChuoi sau khi chuyen: ";
		XuatChuoi(str);
		break;

	case 4:
		cout << "\n4. Chuyen ky tu HOA";
		cout << "\nChuoi truoc khi chuyen : ";
		XuatChuoi(str);

		Chuyen_KT_HOA(str);
		cout << "\nChuoi sau khi chuyen: ";
		XuatChuoi(str);
		break;

	case 5:
		cout << "\n5. Dao nguoc chuoi";
		cout << "\nChuoi truoc khi dao : ";
		XuatChuoi(str);

		DaoNguocChuoi(str);
		cout << "\nChuoi sau khi dao: ";
		XuatChuoi(str);
		break;
	case 6:
		cout << "\n6. Kiem tra chuoi doi xung";
		cout << "\nChuoi da nhap: ";
		XuatChuoi(str);
		if (KiemTraDoiXung(str))
			cout << "\nChuoi vua nhap doi xung.";
		else
			cout << "\nChuoi vua nhap khong doi xung.";
		break;
	}
	_getch();
}




