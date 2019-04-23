
void XuatMenu()
{
	cout << "\n========== CHON CHUC NANG ==========\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Chuc nang 1";
	cout << "\n2. Chuc nang 2";
	cout << "\n3. Chuc nang 3";
	cout << "\n====================================\n";
}

void chonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		cout << "\nNhap vao chuc nang tuong ung: ";
		cin >> stt;
		if (0 < stt && stt <= soMenu)
			break;
	}

	return stt;
}



