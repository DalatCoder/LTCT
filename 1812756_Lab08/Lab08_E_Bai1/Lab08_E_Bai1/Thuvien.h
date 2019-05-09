
#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

typedef char String[MAX];

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

void XuatSinhVien_1_Lop(SinhVien sv[MAX], int n, char lop[])
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		if (_strcmpi(sv[i].lop, lop) == 0)
			Xuat_1SV(sv[i]);
	}
	XuatKeNgang(2);
}

void XuatSinhVienTheoLop(SinhVien sv[MAX], int n)
{
	String lop[MAX];
	int m = 1;
	strcpy_s(lop[0], sv[0].lop);
	int dau;

	for (int i = 1; i < n; i++)
	{
		dau = 1;
		for (int j = 0; j < m; j++)
			if (_strcmpi(sv[i].lop, lop[j]) == 0)
			{
				dau = 0;
				break;
			}
		
		if (dau)
			strcpy_s(lop[m++], sv[i].lop);
	}

	// lop[ctk39, ctk38, ctk37]

	for (int j = 0; j < m; j++)
	{
		cout << "\n\n =============================== " << lop[j] << " ===============================\n";
		XuatSinhVien_1_Lop(sv, n, lop[j]);
	}
}

void HoanVi(SinhVien &a, SinhVien &b)
{
	SinhVien c = a;
	a = b;
	b = c;
}

void GiamDan_DTB(SinhVien sv[MAX], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sv[i].DTB < sv[j].DTB)
				HoanVi(sv[i], sv[j]);
		}
	}
}

void TangDan_Ten_MSSV(SinhVien sv[MAX], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (_strcmpi(sv[i].ten, sv[j].ten) > 0)
				HoanVi(sv[i], sv[j]);
			if (_strcmpi(sv[i].ten, sv[j].ten) == 0)
				if (_strcmpi(sv[i].maSV, sv[j].maSV) > 0)
					HoanVi(sv[i], sv[j]);
		}
	}
}

void TimTenSinhVien(SinhVien sv[MAX], int n, char ten[10])
{
	int viTri[MAX];
	int m = 0;

	for (int i = 0; i < n; i++)
	{
		if (_strcmpi(sv[i].ten, ten) == 0)
		{
			viTri[m++] = i;
		}
	}

	if (m == 0)
	{
		cout << "\nTrong danh sach khong co ten " << ten << ".";
	}
	else
	{
		XuatTieuDe();
		for (int i = 0; i < m; i++)
			Xuat_1SV(sv[viTri[i]]);
		XuatKeNgang(1);
	}
}

SinhVien DiemTBCaoNhat(SinhVien sv[MAX], int n)
{
	SinhVien kq = sv[0];

	for (int i = 1; i < n; i++)
		if (kq.DTB < sv[i].DTB)
			kq = sv[i];

	return kq;
}

void XepLoai(SinhVien sv[MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (sv[i].DTB < 4)
			strcpy_s(sv[i].xepLoai, "Kem");
		else if (sv[i].DTB < 5.5)
			strcpy_s(sv[i].xepLoai, "Yeu");
		else if (sv[i].DTB < 7)
			strcpy_s(sv[i].xepLoai, "TB");
		else if (sv[i].DTB < 8.5)
			strcpy_s(sv[i].xepLoai, "Kha");
		else if (sv[i].DTB <= 10)
			strcpy_s(sv[i].xepLoai, "Gioi");
	}
}




