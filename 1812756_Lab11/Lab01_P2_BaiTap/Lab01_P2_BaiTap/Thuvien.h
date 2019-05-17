
#define MAX 100

struct Date
{
	int ngay;
	int thang;
	int nam;
};

struct NhanVien
{
	char maNV[7];
	char ho[10];
	char tenLot[10];
	char ten[10];
	Date ntn;
	char diaChi[20];
	double luong;
};

