
void XuatMenu()
{
	cout << "\n=============== HE THONG CHUC NANG =================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap tu dong mang";
	cout << "\n2. Xem mang";
	cout << "\n3. Tinh tong cac phan tu trong mang";
	cout << "\n4. Tinh tich cac phan tu trong mang";
	cout << "\n5. Tinh gia tri nho nhat cua mang";
	cout << "\n6. Tinh gia tri lon nhat trong mang";
	cout << "\n7. Tinh tong cac so nguyen to trong mang";
	cout << "\n8. tim vi tri cuoi cung x xuat hien trong mang, neu co";
	cout << "\n9. Dem so duong chay cua mang";
}

int ChonMenu(int soMenu)
{
	int stt;

	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang tuong ung : ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}

	return stt;
}

void XuLyMenu(int menu, DayDong a, int n)
{
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap tu dong mang";
		break;
	case 2:
		cout << "\n2. Xem mang";
		break;
	case 3:
		cout << "\n3. Tinh tong cac phan tu trong mang";
		break;
	case 4:
		cout << "\n4. Tinh tich cac phan tu trong mang";
		break;
	case 5:
		cout << "\n5. Tinh gia tri nho nhat cua mang";
		break;
	case 6:
		cout << "\n6. Tinh gia tri lon nhat trong mang";
		break;
	case 7:
		cout << "\n7. Tinh tong cac so nguyen to trong mang";
		break;
	case 8:
		cout << "\n8. tim vi tri cuoi cung x xuat hien trong mang, neu co";
		break;
	case 9:
		cout << "\n9. Dem so duong chay cua mang";
		break;
	}
	_getch();
}

