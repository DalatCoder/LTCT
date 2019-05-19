
#define MAX 100

enum Loai
{
	Sach,
	BaoKH,
	TapChi,
	LuanVan
};

struct HoTen
{
	char hoLot[20];
	char ten[7];
};

struct TaiLieu
{
	char maTL[10];
	char tuaDe[30];
	Loai loai;
	int namXB;
	HoTen hoTen;
	double gia;
};


void Tao_1_TaiLieu(char *maTL, char *tuaDe, Loai loai, unsigned int namXB, HoTen hoten, double gia, TaiLieu *ds, int &n);

void Tao_1_TaiLieu(char *maTL, char *tuaDe, Loai loai, unsigned int namXB, HoTen hoten, double gia, TaiLieu *ds, int &n)
{
	strcpy_s((ds + n)->maTL, 10, maTL);
	strcpy_s((ds + n)->tuaDe, 30, tuaDe);
	(ds + n)->loai = loai;
	(ds + n)->namXB = namXB;
	(ds + n)->hoTen = hoten;
	(ds + n)->gia = gia;
}



