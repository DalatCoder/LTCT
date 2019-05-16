
#define MAX 20
#define THOAT 0

struct Date
{
	int ngay;
	int thang;
	int nam;
};

struct NhanVien
{
	int ms;
	char hoTen[MAX];
	Date ntn;
	char diaChi[MAX];
	double luong;
};

void Read_Struct(char *filename, NhanVien ds[MAX], int &n);
void Xuat_NV(NhanVien ds[MAX], int n);

void Read_Struct(char *filename, NhanVien ds[MAX], int &n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file.";
		exit(-1);
	}

	int ms;
	char hoTen[MAX];
	char diaChi[MAX];
	double luong;
	int ngay, thang, nam;

	n = 0;

	in >> ms; ds[n].ms = ms;
	in >> hoTen; strcpy_s(ds[n].hoTen, hoTen);
	in >> ngay; ds[n].ntn.ngay = ngay;
	in >> thang; ds[n].ntn.thang = thang;
	in >> nam; ds[n].ntn.nam = nam;
	in >> diaChi; strcpy_s(ds[n].diaChi, diaChi);
	in >> luong; ds[n].luong = luong;

	while (!in.eof())
	{
		n++;
		in >> ms; ds[n].ms = ms;
		in >> hoTen; strcpy_s(ds[n].hoTen, hoTen);
		in >> ngay; ds[n].ntn.ngay = ngay;
		in >> thang; ds[n].ntn.thang = thang;
		in >> nam; ds[n].ntn.nam = nam;
		in >> diaChi; strcpy_s(ds[n].diaChi, diaChi);
		in >> luong; ds[n].luong = luong;
	}
	
	in.close();
}

void Xuat_NV(NhanVien ds[MAX], int n)
{
	cout << setiosflags(ios::left);
	cout << setw(20) << "MS"
		<< setw(20) << "Ho Ten"
		<< setw(20) << "NTN sinh"
		<< setw(20) << "Dia Chi"
		<< setw(20) << "Luong";
	cout << endl << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(20) << ds[i].ms
			<< setw(20) << ds[i].hoTen
			<< setw(2) << ds[i].ntn.ngay << '/'
			<< setw(2) << ds[i].ntn.thang << '/'
			<< setw(14) << ds[i].ntn.nam
			<< setw(20) << ds[i].diaChi
			<< setiosflags(ios::fixed) << setprecision(2) << setw(20) << ds[i].luong;
		cout << endl;
	}
}


