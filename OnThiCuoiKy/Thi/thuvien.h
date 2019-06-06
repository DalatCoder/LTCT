#define MAX 100

struct HoTen
{
  char ho[8];
  char hoLot[8];
  char ten[8];
};

struct NgayThangNam
{
  int ngay;
  int thang;
  int nam
};

struct NhanVien
{
  char maSo[7];
  HoTen hoTen;
  NgayThangNam ngayThangNam;
  char diaChi[15];
  double luong;
};
