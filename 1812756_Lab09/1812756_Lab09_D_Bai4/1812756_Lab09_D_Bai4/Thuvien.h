
#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

struct SinhVien
{
	char maSV[8];
	char hoLot[14];
	char ten[7];
	char gioiTinh[4];
	unsigned int namSinh;
	char queQuan[14];
	char lop[7];
	double diem;
};

void Chen_SV(char *maSV, char *hoLot, char *ten, char *gioiTinh, unsigned int namSinh, char *queQuan, char *lop, double diem, SinhVien *a, int &n);
void TaoDanhSachSinhVien(SinhVien *a, int &n);
void XuatKeNgangDoi();
void XuatKeNgangDon();
void XuatTieuDe();
void Xuat_1SV(SinhVien p);
void Xuat_DSSV(SinhVien *a, int n);

void Chen_SV(char *maSV, char *hoLot, char *ten, char *gioiTinh, unsigned int namSinh, char *queQuan, char *lop, double diem, SinhVien *a, int &n)
{
	if (n < MAX)
	{
		strcpy_s((a + n)->maSV, 8, maSV);
		strcpy_s((a + n)->hoLot, 14, hoLot);
		strcpy_s((a + n)->ten, 7, ten);
		strcpy_s((a + n)->gioiTinh, 4, gioiTinh);
		(a + n)->namSinh = namSinh;
		strcpy_s((a + n)->queQuan, 14, queQuan);
		strcpy_s((a + n)->lop, 7, lop);
		(a + n)->diem = diem;
		n++;
	}
}

void TaoDanhSachSinhVien(SinhVien *a, int &n)
{
	Chen_SV("1512967", "Trieu", "Minh", "Nu", 1997, "Ninh Thuan", "CTK39", 5.5, a, n);
	Chen_SV("1410279", "Hoang Duoc", "Su", "Nam", 1995, "Da Lat", "CTK38", 6, a, n);
	Chen_SV("1512555", "Au Duong", "Phong", "Nam", 1996, "Khanh Hoa", "CTK39", 7.5, a, n);
	Chen_SV("1412120", "Vo Thi", "Yen", "Nu", 1996, "Binh Dinh", "CTK38", 3, a, n);
	Chen_SV("1313320", "Le Ngoc", "Minh", "Nam", 1995, "Can Tho", "CTK37", 2.5, a, n);
	Chen_SV("1510214", "Dinh Thi", "Yen", "Nu", 1997, "Da Lat", "CTK39", 9, a, n);
	Chen_SV("1512887", "Vuong Ngoc", "Yen", "Nu", 1997, "Da Nang", "CTK39", 6, a, n);
	Chen_SV("1414245", "Vuong Trung", "Duong", "Nam", 1996, "Phu Yen", "CTK38", 7, a, n);
	Chen_SV("1510192", "Nhac Linh", "San", "Nu", 1997, "Da Lat", "CTK39", 3.2, a, n);
	Chen_SV("1312890", "Hoang", "Dung", "Nu", 1995, "Da Nang", "CTK37", 8, a, n);
	Chen_SV("1510192", "Cao Vien", "Vien", "Nu", 1997, "Da Lat", "CTK39", 9.6, a, n);
	Chen_SV("1444405", "Truong Vo", "Ky", "Nam", 1996, "Binh Dinh", "CTK38", 7, a, n);
	Chen_SV("1412988", "Vi Tieu", "Bao", "Nam", 1996, "Da Nang", "CTK38", 8.5, a, n);
	Chen_SV("1312990", "Duong", "Qua", "Nam", 1995, "Da Lat", "CTK37", 3.5, a, n);
	Chen_SV("1333993", "Chau Ba", "Thong", "Nam", 1994, "Quang Ngai", "CTK37", 9.1, a, n);
	Chen_SV("1512128", "Ta Van", "Ton", "Nam", 1997, "Binh Dinh", "CTK39", 9.3, a, n);
	Chen_SV("1400128", "Vien Thua", "Chi", "Nam", 1997, "Binh Thuan", "CTK38", 5.3, a, n);
	Chen_SV("1512868", "Doan", "Du", "Nam", 1996, "Da Lat", "CTK39", 8.5, a, n);
}

void XuatKeNgangDoi()
{
	int i;
	cout << endl;
	cout << setiosflags(ios::left)
		<< '|';
	for (i = 1; i <= 68; i++)
		cout << NGANGDOI;
	cout << '|';
}

void XuatKeNgangDon()
{
	int i;
	cout << endl;
	cout << setiosflags(ios::left)
		<< '|';
	for (i = 1; i <= 68; i++)
		cout << NGANGDON;
	cout << '|';
}

void XuatTieuDe()
{
	XuatKeNgangDoi();
	cout << endl;
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(7) << "Ma SV"
		<< '|'
		<< setw(15) << "Ho"
		<< setw(7) << "Ten"
		<< '|'
		<< setw(4) << "GT"
		<< '|'
		<< setw(4) << "NS"
		<< '|'
		<< setw(14) << "Que quan"
		<< '|'
		<< setw(6) << "Lop"
		<< '|'
		<< setw(5) << "Diem"
		<< '|';
	XuatKeNgangDoi();
}

void Xuat_1SV(SinhVien p)
{
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(7) << p.maSV
		<< '|'
		<< setw(15) << p.hoLot
		<< setw(7) << p.ten
		<< '|'
		<< setw(4) << p.gioiTinh
		<< '|'
		<< setw(4) << p.namSinh
		<< '|'
		<< setw(14) << p.queQuan
		<< '|'
		<< setw(6) << p.lop
		<< '|'
		<< setw(5) << setiosflags(ios::fixed) << setprecision(1) << p.diem
		<< '|';
}

void Xuat_DSSV(SinhVien *a, int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i<n; i++)
	{
		cout << endl;
		Xuat_1SV(*(a + i));
		if ((i + 1) % 5 == 0)
			XuatKeNgangDon();
	}
	XuatKeNgangDoi();
}

void Sap_DSSV_GiamDiem(SinhVien *a, int n)
{
	SinhVien t;
	int i, j;
	if (n == 0)
	{
		cout << "\nDS rong!";
		return;
	}
	else
	{
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if ((a + i)->diem < (a + j)->diem)
				{
					t = *(a + i);
					*(a + i) = *(a + j);
					*(a + j) = t;
				}
	}
}

void DSSV_Lop(SinhVien *a, int n, char lop[7], SinhVien *dsLop, int &h)
{
	int kq = n; 
	int i;

	for (i = 0; i < n; i++)
		if (_strcmpi((a + i)->lop, lop) == 0)
		{
			kq = i;
			break;
		}

	if (kq == n)
		h = 0;

	else
	{
		h = 0;
		for (i = kq; i < n; i++)
			if (_strcmpi((a + i)->lop, lop) == 0)
			{
				*(dsLop + h) = *(a + i);
				h++;
			}
	}
}

void Xuat_DSSV_Lop(SinhVien *a, int n, char lop[7])
{
	SinhVien *dsLop;
	int i, h;
	dsLop = new SinhVien[MAX];
	DSSV_Lop(a, n, lop, dsLop, h);
	if (h == 0)
		cout << "\nKhong co lop " << lop << " trong DSSV";
	else
	{
		cout << "\nDanh sach sinh vien thuoc lop " << lop << ":\n";
		XuatTieuDe();
		for (i = 0; i < h; i++)
		{
			cout << endl;
			Xuat_1SV(*(dsLop + i));
		}
		XuatKeNgangDoi();
		cout << "\nCo " << h << " sinh vien thuoc lop " << lop;
	}
	delete[] dsLop;
}

void Sap_DSSV_Lop_GiamDiem(SinhVien *a, int n, char lop[7], SinhVien *dsLop, int &h)
{
	SinhVien t;
	int i, j;
	DSSV_Lop(a, n, lop, dsLop, h);
	if (h == 0)
		return;
	else
	{
		for (i = 0; i < h-1; i++)
			for (j = i + 1; j < h; j++)
				if ((dsLop + i)->diem < (dsLop + j)->diem)
				{
					t = *(dsLop + i);
					*(dsLop + i) = *(dsLop + j);
					*(dsLop + j) = t;
				}
	}
}


void Xuat_DSSV_Lop_Giam_Diem(SinhVien *a, int n, char lop[7])
{
	SinhVien *dsLop;
	int i, h;
	dsLop = new SinhVien[MAX];
	Sap_DSSV_Lop_GiamDiem(a, n, lop, dsLop, h);
	if (h == 0)
		cout << "\nKhong co lop " << lop << " trong DSSV.";
	else
	{
		cout << "\nDanh sach sinh vien thuoc lop " << lop << " giam dan theo diem:\n";
		XuatTieuDe();
		for (i = 0; i < h; i++)
		{
			cout << endl;
			Xuat_1SV(*(dsLop + i));
		}
		XuatKeNgangDoi();
		cout << "\nCo " << h << " sinh vien thuoc lop " << lop;
	}

	delete[] dsLop;
}










































