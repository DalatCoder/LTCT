

#define		BIN			2	
#define		OCT			8
#define		HEX			16
#define		SEV			7


void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);

/*
	Dinh nghia ham xuat menu
*/
void XuatMenu()
{
	cout << "\n =========== CHUONG TRINH DOI CO SO ============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Doi sang he nhi phan (b = 2)";
	cout << "\n2. Doi sang he bat phan (b = 8)";
	cout << "\n3. Doi sang he thap luc phan (b = 16)"; 
	cout << "\n4. Doi sang he co so (b = 7)";
	cout << "\n================================================\n";
}

/*
	Dinh nghia ham chon menu
	Input:
		soMenu = so luong menu co san
	Output:
		stt = so thu tu cua menu duoc chon
*/
int ChonMenu(int soMenu)
{
	int stt = -1;

	while (stt < 0 || stt > soMenu)
	{
		cout << "\nChon chuc nang tuong ung (1 - 4) : ";
		cin >> stt;
	}

	return stt;
}

/*
	Dinh nghia ham xu ly menu
	Input:
		stt = so thu tu cua menu duoc chon
	Output: khong
*/
void XuLyMenu(int menu, unsigned int n)
{
	// Khai bao bien de luu gia tri sau khi chuyen doi
	int x;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Doi sang he nhi phan (b = 2)";
		cout << endl << n << "_10  =  ";
		DoiCoSo(n, BIN);
		cout << "_2";
		break;
	case 2:
		cout << "\n2. Doi sang he bat phan (b = 8)";
		cout << endl << n << "_10  =  ";
		DoiCoSo(n, OCT);
		cout << "_8";
		break;
	case 3:
		cout << "\n3. Doi sang he thap luc phan (b = 16)";
		cout << endl << n << "_10  =  ";
		DoiCoSo(n, HEX);
		cout << "_16";
		break;
	case 4:
		cout << "\n4. Doi sang he co so (b = 7)";
		cout << endl << n << "_10  =  ";
		DoiCoSo(n, SEV);
		cout << "_7";
		break;
	}
	_getch();
}



