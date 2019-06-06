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

  // n = n + 1;

  in.close();
  return 1;
}

void XuatDongKe(char kt)
{
  cout << '|';
  for (int i = 1; i <= 81; i++)
    cout
        << kt;
  cout << '|' << endl;
}

void XuatTieuDe()
{
  XuatDongKe('=');

  cout << setiosflags(ios::left);
  cout << '|';
  cout << setw(11) << "Ma So"
       << '|' << setw(8) << "Ho"
       << setw(8) << "tLot"
       << setw(8) << "Ten"
       << '|' << setw(12) << "Nam Sinh"
       << '|' << setw(17) << "Que Quan"
       << '|' << setw(13) << "Luong";
  cout << '|';
  cout << endl;

  XuatDongKe('=');
}

void Xuat_1_NhanVien(NhanVien a)
{
  cout << setiosflags(ios::left);
  cout << '|';
  cout << setw(11) << a.maSo
       << '|' << setw(8) << a.hoTen.ho
       << setw(8) << a.hoTen.hoLot
       << setw(8) << a.hoTen.ten
       << '|' << setw(2) << a.ngayThangNam.ngay << '/'
       << setw(2) << a.ngayThangNam.thang << '/'
       << setw(6) << a.ngayThangNam.nam
       << '|' << setw(17) << a.diaChi
       << '|' << setw(13) << setiosflags(ios::fixed) << setprecision(2) << a.luong;
  cout << '|';
  cout << endl;
}

void Xuat_DS_NhanVien(NhanVien a[MAX], int n)
{
  XuatTieuDe();

  for (int i = 0; i < n;i++)
  {
    Xuat_1_NhanVien(a[i]);
    if ((i+1) % 3 == 0)
      XuatDongKe('-');
  }

  XuatDongKe('=');
}
