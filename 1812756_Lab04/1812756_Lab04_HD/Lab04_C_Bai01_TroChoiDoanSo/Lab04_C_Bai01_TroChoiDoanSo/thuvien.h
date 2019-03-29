// Dinh nghia cac hang so va kieu du lieu moi
#define		MAX		100 // Gioi han so duong ngau nhien may tinh nghi ra < MAX


// Khai bao nguyen mau cac ham xu ly
int ChonMucDoan();
int SinhSoNgauNhien();
int XuLyTroChoi(int k, int soDe);
void ThongBaoKetQua(int kq, int soDe);


// Dinh nghia cac ham xu ly

/*
	Dinh nghia ham chon so lan doan
	Input: khong co
	Output: k = so lan doan (gia su co 3 muc tuong ung voi so lan doan la: 3, 5, 7
*/
int ChonMucDoan()
{
	int k;
	do
	{
		cout << "\nChon so lan doan toi da (3, 5, 7) : k = ";
		cin >> k;
	} while (k != 3 && k != 5 && k != 7);
	return k;
}

/*
	Dinh nghia ham sinh so ngau nhien
	Input: khong co
	Output: soDe = mot so duong ngau nhien < MAX
*/
int SinhSoNgauNhien()
{
	int soDe;
	
	// gieo so ngau nhien
	srand((unsigned int)time(0)); //khai bao <time.h>

	// tao so ngau nhien
	soDe = rand() % MAX; // Khai bao <stdlib.h>
	cout << "so de = " << soDe;
	return soDe;
}

/*
	Dinh nghia ham xu ly tro choi
	Input: k = so lan doan
			soDe = de do may tinh nghi ra
	Output:
		1 nguoi choi thang
		0 nguoi choi thua
*/
int XuLyTroChoi(int k, int soDe)
{
	int i, soDoan, kq = 0;
	for (i = 1; i <= k; i++)
	{
		cout << "\nDoan lan " << i << ", so doan = ";
		cin >> soDoan;
		if (soDoan == soDe)
		{
			kq = 1;
			break;
		}
		else
		{
			if (soDoan > soDe)
				cout << "\nSo doan lon hon";
			else
				cout << "\nSo doan nho hon";
		}
	}
	return kq;
}

/*
	Dinh nghia ham thong bao ket qua tro choi
	Input: kq, soDe
	Output: khong co
*/
void ThongBaoKetQua(int kq, int soDe)
{
	system("cls");
	cout << "\nKET QUA TRO CHOI";
	if (kq)
		cout << "\nNguoi choi thang";
	else
		cout << "\nNguoi choi thua";
	cout << "\nDe cho so: " << soDe;
}


