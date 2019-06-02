
#define MAX 100

struct NhanVien
{
	char maSo[7]; 
	char hoTen[25];
	int ngaySinh;
	int thangSinh;
	int namSinh;
	char queQuan[15];
	double luong;
};

int DocDuLieuNhanVien(NhanVien a[MAX], int &n, char tenTapTin[MAX]);
void XuatDuongKe(char kt);
void XuatTieuDe();
void Xuat_1_NhanVien(NhanVien a);
void XuatDanhSachNhanVien(NhanVien a[MAX], int n);
int Tim_NV_MaSo(NhanVien a[MAX], int n, char maSo[7]);
void Tim_NV_Luong(NhanVien a[MAX], int n, double X);

int DocDuLieuNhanVien(NhanVien a[MAX], int &n, char tenTapTin[MAX])
{
	ifstream in(tenTapTin);

	// Kiem tra viec mo tap tin co thanh cong hay khong
	if (!in) 
		return 0; // mo tap tin khong thanh cong

	n = 0; // ban dau chua co nhan vien nao het

	in >> a[n].maSo;
	in >> a[n].hoTen;
	in >> a[n].ngaySinh;
	in >> a[n].thangSinh;
	in >> a[n].namSinh;
	in >> a[n].queQuan;
	in >> a[n].luong;

	while (!in.eof())
	{
		n = n + 1;

		in >> a[n].maSo;
		in >> a[n].hoTen;
		in >> a[n].ngaySinh;
		in >> a[n].thangSinh;
		in >> a[n].namSinh;
		in >> a[n].queQuan;
		in >> a[n].luong;
	}
	n = n + 1; //12 nhan vien
	
	in.close();
	return 1;
}

// |=============================================================================
// |Maso    |HoTen            |ngaythangnam       |quequan           |luong
// |=============================================================================
// 1
// 2
// 3
// ------------------------------------------------------------------------------
// 4
// 5
// 6
// ------------------------------------------------------------------------------
// ==============================================================================

// 11/03/2000
// 10000000.00

void XuatDuongKe(char kt)
{
	cout << '|';
	for (int i = 1; i <= 82; i++)
		cout << kt;
	cout << '|';
	cout << endl;
}

// setw(x) set width 
void XuatTieuDe()
{
	XuatDuongKe('=');

	// can chinh le trai
	cout << '|';
	cout << setiosflags(ios::left);

	cout << setw(9) << "Ma So"
		<< '|' << setw(27) << "Ho va Ten"
		<< '|' << setw(12) << "Nam Sinh"
		<< '|' << setw(17) << "Que Quan"
		<< '|' << setw(13) << "Tien Luong";
	cout << '|';
	cout << endl;

	XuatDuongKe('=');
}

// 11/03/2000
void Xuat_1_NhanVien(NhanVien a)
{
	cout << '|';
	// can chinh le trai
	cout << setiosflags(ios::left);

	cout << setw(9) << a.maSo
		<< '|' << setw(27) << a.hoTen
		<< '|' << setw(2) << a.ngaySinh << '/'
		<< setw(2) << a.thangSinh << '/'
		<< setw(6) << a.namSinh
		<< '|' << setw(17) << a.queQuan
		<< '|' << setw(13) << setiosflags(ios::fixed) << setprecision(2) << a.luong;
	cout << '|';
	cout << endl;
}

void XuatDanhSachNhanVien(NhanVien a[MAX], int n)
{
	// In dong tieu de
	XuatTieuDe();

	// In nhan vien theo tung hang
	for (int i = 0; i < n; i++)
	{
		Xuat_1_NhanVien(a[i]);
		if ((i + 1) % 3 == 0)
			XuatDuongKe('-');
	}

	// In dong ke cuoi cung
	XuatDuongKe('=');
}

int Tim_NV_MaSo(NhanVien a[MAX], int n, char maSo[7])
{
	// strcmp
	int viTri = -1; // khong tim thay nhan vien voi maSo truyen vao trong DSNV

	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].maSo, maSo) == 0)
		{
			viTri = i;
			break;
		}
	}

	return viTri;
}

void Tim_NV_Luong(NhanVien a[MAX], int n, double X)
{
	int viTri[MAX]; // luu lai vi tri cua nhan vien co muc luong >= X
	int m;

	m = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i].luong >= X)
		{
			viTri[m] = i;
			m = m + 1;
		}
	}

	cout << "\nCo " << m << " nhan vien co muc luong tren " << X << endl;

	if (m > 0)
	{
		XuatTieuDe();
		for (int i = 0; i < m; i++)
		{
			Xuat_1_NhanVien(a[viTri[i]]);
		}
		XuatDuongKe('=');
	}
}