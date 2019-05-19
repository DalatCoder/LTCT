
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




