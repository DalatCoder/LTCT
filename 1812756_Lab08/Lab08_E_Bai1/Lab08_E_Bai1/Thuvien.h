
#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

struct SinhVien
{
	char maSV[8];
	char hoLot[21];
	char ten[8];
	unsigned int namSinh;
	char lop[10];
	double DTB;
	char xepLoai[5];
};


void Nhap_1SV(SinhVien &sv)
{
	cout << "\nMSSV (dung 7 ky so) : ";
	cin.ignore(MAX, '\n');
	gets_s(sv.maSV, 8);

	cout << "\nHo va chu lot: ";
	gets_s(sv.hoLot, 21);

	cout << "\nTen sinh vien: ";
	gets_s(sv.ten, 8);

	cout << "\nNam sinh: ";
	cin >> sv.namSinh;

	cout << "\nLop: ";
	cin.ignore(MAX, '\n');
	gets_s(sv.lop, 10);

	cout << "\nNhap DTB: ";
	cin >> sv.DTB;
}

void Nhap_DSSV(SinhVien sv[MAX], int &n)
{
	int i;
	cout << "\nNhap so sinh vien : ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		system("cls");
		cout << "\nNhap thong tin cho nhan vien " << i + 1 << " : ";
		Nhap_1SV(sv[i]);
	}
}

void XuatKeNgang(int loai)
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left) << "|";
	if (loai == 1)
	{
		for (i = 1; i <= 83; i++)
			cout << NGANGDOI;
	}
	else
	{
		for (i = 1; i <= 83; i++)
			cout << NGANGDON;
	}
	cout << "|";
}

void XuatTieuDe()
{
	XuatKeNgang(1);
	cout << endl;
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(10) << "MSSV"
		<< '|'
		<< setw(24) << "Ho"
		<< setw(8) << "Ten"
		<< '|'
		<< setw(12) << "Nam sinh"
		<< '|'
		<< setw(8) << "Lop"
		<< '|'
		<< setw(8) << "DTB"
		<< '|'
		<< setw(8) << "XLoai"
		<< '|';
	XuatKeNgang(1);
}


void Xuat_1SV(SinhVien sv)
{
	cout << endl;
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(10) << sv.maSV
		<< '|'
		<< setw(24) << sv.hoLot
		<< setw(8) << sv.ten
		<< '|'
		<< setw(12) << sv.namSinh
		<< '|'
		<< setw(8) << sv.lop
		<< '|'
		<< setw(8) << setiosflags(ios::fixed) << setprecision(1) << sv.DTB
		<< '|'
		<< setw(8) << sv.xepLoai
		<< '|';
}

void Xuat_DSNV(SinhVien sv[MAX], int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		Xuat_1SV(sv[i]);
		if ((i + 1) % 5 == 0)
			XuatKeNgang(2);
	}
	XuatKeNgang(1);
}







