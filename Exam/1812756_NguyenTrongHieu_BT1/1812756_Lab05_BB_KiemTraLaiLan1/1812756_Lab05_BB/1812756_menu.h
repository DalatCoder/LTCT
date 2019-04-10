
/*
	Phan khai bao nguyen mau ham
*/

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int n);

/*
	Phan dinh nghia cac ham
*/

void XuatMenu()
{
	cout << "\n=============== CHON CHUC NANG ===============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Xuat day so ra man hinh";
	cout << "\n2. Dem so nguyen to cuoi cung trong mang a";
	cout << "\n3. Dem so luong so co 3 chu so";
	cout << "\n4. So duong tang dan - So khac giu nguyen thu tu";
	cout << "\n5. Chen phan tu x vao mang tai vi tri cho truoc";
	cout << "\n6. Xoa phan tu tai vi tri cho truoc ra khoi mang";
	cout << "\n==============================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;

	do
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang: ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);

	return stt;
}

void XuLyMenu(int menu, DaySo a, int n)
{
	int kq, vt, x;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Xuat day so ra man hinh\n";
		XuatDaySo(a, n);
		break;

	case 2:
		cout << "\n2. Tim so nguyen to cuoi cung trong mang a";
		kq = ViTri_SNT_CuoiCung(a, n);
		if (kq == -1)
			cout << "\nMang khong chua so nguyen to.";
		else
		{
			cout << "\nSo nguyen to cuoi cung trong day so la : " << a[kq];
			cout << "\nVi tri : " << kq;
		}
		cout << "\nXem lai mang hien hanh de kiem tra:\n";
		XuatDaySo(a, n);
		break;

	case 3:
		cout << "\n3. Dem so luong so co 3 chu so";
		kq = DemSoCo3ChuSo(a, n);
		cout << "\nSo luong so co 3 chu so la : " << kq;
		cout << "\nXem lai mang hien hanh de kiem tra:\n";
		XuatDaySo(a, n);
		break;

	case 4:
		cout << "\n4. So duong tang dan - So khac giu nguyen thu tu";
		cout << "\nMang truoc khi sap xep:\n";
		XuatDaySo(a, n);
		SapXep(a, n);
		cout << "\nMang sau khi sap xep:\n";
		XuatDaySo(a, n);
		break;

	case 5:
		cout << "\n5. Chen phan tu x vao mang tai vi tri cho truoc";
		cout << "\nMang truoc khi chen, co kich thuoc n = " << n << '\n';
		XuatDaySo(a, n);

		cout << "\nNhap vao phan tu can chen : ";
		cin >> x;
		cout << "\nNhap vao vi tri can chen : ";
		cin >> vt;

		ChenPhanTu(a, n, x, vt);

		cout << "\nMang sau khi chen, co kich thuoc n = " << n << "\n";
		XuatDaySo(a, n);
		break;

	case 6:
		cout << "\n6. Xoa phan tu tai vi tri cho truoc ra khoi mang";
		cout << "\nMang truoc khi xoa, co kich thuoc n = " << n << '\n';
		XuatDaySo(a, n);

		cout << "\nNhap vao vi tri cua phan tu can xoa : ";
		cin >> vt;
		XoaPhanTu(a, n, vt);
		cout << "\nMang sau khi xoa, co kich thuoc n = " << n << "\n";
		XuatDaySo(a, n);
		break;

	}
	_getch();
}



