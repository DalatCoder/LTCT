#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

typedef unsigned short int Byte;

struct NgayThangNam
{
	Byte ngaySinh;
	Byte thangSinh;
	unsigned int namSinh;
};

struct NhanVien
{
	char maNV[8];
	char hoLot[21];
	char ten[8];
	NgayThangNam ntns;
	char diaChi[21];
	double luong;
};


void Nhap_1NV(NhanVien &p);
void Nhap_DSNV(NhanVien a[MAX], int &n);
void XuatKeNgang();
void XuatTieuDe();
void Xuat_1NV(NhanVien p);
void Xuat_DSNV(NhanVien a[MAX], int n);

void Nhap_1NV(NhanVien &p)
{
	cout << "\nMa nhan vien (dung 7 ky so): ";
	cin.ignore(MAX, '\n');
	gets_s(p.maNV, 8);

	cout << "\nHo va chu lot: ";
	gets_s(p.hoLot, 21);

	cout << "\nTen nhan vien: ";
	gets_s(p.ten, 7);

	cout << "\nNgay sinh: ";
	cin >> p.ntns.ngaySinh;

	cout << "\nThang sinh: ";
	cin >> p.ntns.thangSinh;

	cout << "\nNam sinh: ";
	cin >> p.ntns.namSinh;

	cout << "\nNhap dia chi: ";
	cin.ignore(MAX, '\n');
	gets_s(p.diaChi, 20);

	cout << "\nNhap luong: ";
	cin >> p.luong;
}

void Nhap_DSNV(NhanVien a[MAX], int &n)
{
	int i;
	cout << "\nNhap n = ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		system("cls");
		cout << "\nNhap thong tin cho nhan vien thu " << i + 1 << " : ";
		Nhap_1NV(a[i]);
	}
}

void XuatKeNgang()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left) << "|";
	for (i = 1; i <= 76; i++)
		cout << NGANGDOI;
	cout << '|';
}

void XuatTieuDe()
{
	XuatKeNgang();
	cout << endl;
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(8) << "Ma NV"
		<< '|'
		<< setw(16) << "Ho"
		<< setw(8) << "Ten"
		<< '|'
		<< setw(12) << "NTN sinh"
		<< '|'
		<< setw(16) << "Dia chi"
		<< '|'
		<< setw(12) << "Luong"
		<< '|';
	XuatKeNgang();
}

void Xuat_1NV(NhanVien p)
{
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(8) << p.maNV
		<< '|'
		<< setw(16) << p.hoLot
		<< setw(8) << p.ten
		<< '|'
		<< setw(2) << p.ntns.ngaySinh
		<< '/'
		<< setw(2) << p.ntns.thangSinh
		<< '/'
		<< setw(6) << p.ntns.namSinh
		<< '|'
		<< setw(16) << p.diaChi
		<< '|'
		<< setw(12) << setiosflags(ios::fixed) << setprecision(2) << p.luong
		<< '|';
}

void Xuat_DSNV(NhanVien a[MAX], int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat_1NV(a[i]);
	}
	XuatKeNgang();
}





