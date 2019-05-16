
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
	n++;
	in.close();
}


