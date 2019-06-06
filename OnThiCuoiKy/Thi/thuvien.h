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
  int nam;
};

struct NhanVien
{
  char maSo[8];
  HoTen hoTen;
  NgayThangNam ngayThangNam;
  char diaChi[15];
  double luong;
};

int TaoDanhSachNhanVien(NhanVien a[MAX], int &n, char filename[MAX])
{
  ifstream in(filename);

  if (!in)
    return 0;

  n = 0;
  in >> a[n].maSo;
  in >> a[n].hoTen.ho;
  in >> a[n].hoTen.hoLot;
  in >> a[n].hoTen.ten;
  in >> a[n].ngayThangNam.ngay;
  in >> a[n].ngayThangNam.thang;
  in >> a[n].ngayThangNam.nam;
  in >> a[n].diaChi;
  in >> a[n].luong;

  while (!in.eof())
  {
    n = n + 1;
    in >> a[n].maSo;
    in >> a[n].hoTen.ho;
    in >> a[n].hoTen.hoLot;
    in >> a[n].hoTen.ten;
    in >> a[n].ngayThangNam.ngay;
    in >> a[n].ngayThangNam.thang;
    in >> a[n].ngayThangNam.nam;
    in >> a[n].diaChi;
    in >> a[n].luong;
  }

  n = n + 1;

  in.close();
  return 1;
}

void XuatDongKe(char kt)
{
  for (int i = 1; i <= 74; i++)
    cout << kt;
  cout << endl;
}

void XuatTieuDe()
{
  XuatDongKe('=');

  cout << setiosflags(ios::left);
  cout << setw(8) << "Ma So"
       << setw(8) << "Ho"
       << setw(8) << "tLot"
       << setw(8) << "Ten"
       << setw(12) << "Nam Sinh"
       << setw(17) << "Que Quan"
       << setw(13) << "Luong";
  cout << endl;

  XuatDongKe('=');
}
