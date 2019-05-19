
#define MAX 100

struct HoTen
{
	char hoLot[20];
	char ten[10];
};

struct TaiLieu
{
	char maTL[10];
	char tuaDe[50];
	char loai[10];
	int namXB;
	HoTen hoTen;
	char nhaXB[15];
	double gia;
};


void Tao_1_TaiLieu(char *maTL, char *tuaDe, char* loai, unsigned int namXB, char *nhaXB, HoTen hoten, double gia, TaiLieu *ds, int &n);
void Tao_DS_TaiLieu(TaiLieu *ds, int &n);

void Tao_1_TaiLieu(char *maTL, char *tuaDe, char* loai, unsigned int namXB, char *nhaXB, HoTen hoten, double gia, TaiLieu *ds, int &n)
{
	if (n < MAX)
	{
		strcpy_s((ds + n)->maTL, 10, maTL);
		strcpy_s((ds + n)->tuaDe, 50, tuaDe);
		strcpy_s((ds + n)->loai, 10, loai);
		(ds + n)->namXB = namXB;
		strcpy_s((ds + n)->nhaXB, 15, nhaXB);
		(ds + n)->hoTen = hoten;
		(ds + n)->gia = gia;

		if (strcmp((ds + n)->loai, "Luan Van") == 0)
			strcpy_s((ds + n)->nhaXB, "");
		if (strcmp((ds + n)->loai, "Tap Chi") == 0)
			(ds + n)->hoTen = { "", "" };

		n++;
	}
}

void Tao_DS_TaiLieu(TaiLieu *ds, int &n)
{
	Tao_1_TaiLieu("S6490159", "5 Phuong trinh lam thay doi the gioi", "Sach", 2014, "NXB Tre", { "Michael", "Guillen" }, 115000, ds, n);
	Tao_1_TaiLieu("S8432092", "Luoc su thoi gian", "Sach", 2018, "NXB Tre", { "Stephen","Hawking" }, 87000, ds, n);
	Tao_1_TaiLieu("S2164870", "Nha gia kim", "Sach", 2016, "NXB Tre", { "Paulo", "Coelho" }, 59000, ds, n);

	Tao_1_TaiLieu("T4861018", "Tap chi van hoc ki 2 so 5", "Tap Chi", 2014, "NXB Van Hoa", { }, 115, ds, n);
	Tao_1_TaiLieu("T2866535", "Tap chi khoa hoc ki 1 so 6", "Tap Chi", 2013, "NXB Khoa Hoc", { }, 115, ds, n);
	Tao_1_TaiLieu("T3016261", "Tap chi nghe thuat ki 3 so 7", "Tap Chi", 2015, "NXB Nghe Thuat", { }, 115, ds, n);

	Tao_1_TaiLieu("L4534032", "Luan van tot nghiep khoa CNTT K39", "Luan Van", 2019, "", { "Kieu", "Phong" }, 70000, ds, n);
	Tao_1_TaiLieu("L4939863", "Luan van tot nghiep khoa QTKD K39", "Luan Van", 2019, "", { "Hu", "Truc" }, 50000, ds, n);
	Tao_1_TaiLieu("L3516002", "Luan van tot nghiep khoa CNTT K39", "Luan Van", 2019, "", { "Doan", "Du" }, 70000, ds, n);

	Tao_1_TaiLieu("B4357002", "Nho khong hoc lon lam nha bao - P1", "Bao KH", 2019, "NXB NinjaLead", { "Tao", "Thao" }, 69000, ds, n);
	Tao_1_TaiLieu("B8122123", "Nho khong hoc lon lam nha bao - P2", "Bao KH", 2019, "NXB NinjaLead", { "Tao", "Thuc" }, 69.500, ds, n);
	Tao_1_TaiLieu("B6653496", "Nho khong hoc lon lam nha bao - P3", "Bao KH", 2019, "NXB NinjaLead", { "Tao", "Phi" }, 69.696, ds, n);
}

void Xuat_1_TaiLieu(TaiLieu taiLieu)
{
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(10) << taiLieu.maTL
		<< '|'
		<< setw(40) << taiLieu.tuaDe
		<< '|'
		<< setw(7) << taiLieu.loai
		<< '|'
		<< setw(5) << taiLieu.namXB
		<< '|'
		<< setw(10) << taiLieu.nhaXB
		<< '|'
		<< setw(15) << taiLieu.hoTen.hoLot
		<< setw(10) << taiLieu.hoTen.ten
		<< '|'
		<< setiosflags(ios::fixed) << setprecision(2) << setw(10) << taiLieu.gia;
	cout << endl;
}

