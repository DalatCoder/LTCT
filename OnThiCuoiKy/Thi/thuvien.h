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

  for (int i = 0; i < n; i++)
  {
    Xuat_1_NhanVien(a[i]);
    if ((i + 1) % 3 == 0)
      XuatDongKe('-');
  }

  XuatDongKe('=');
}

void LietKe_NhanVien_Nam(NhanVien a[MAX], int n, int nam)
{
  int viTri[MAX];
  int m;

  m = 0;

  for (int i = 0; i < n; i++)
    if (a[i].ngayThangNam.nam == nam)
    {
      viTri[m] = i;
      m = m + 1;
    }

  if (m == 0)
    cout << "\nKhong tim thay nhan vien sinh nam " << nam << " trong danh sach.";
  else
  {
    cout << "\nTim thay " << m << " nhan vien sinh nam " << nam << endl;
    XuatTieuDe();
    for (int i = 0; i < m; i++)
      Xuat_1_NhanVien(a[viTri[i]]);
    XuatDongKe('=');
  }
}

double TimLuong_ThapNhat(NhanVien a[MAX], int n)
{
  double min;
  min = a[0].luong;

  for (int i = 1; i < n; i++)
    if (min > a[i].luong)
      min = a[i].luong;

  return min;
}

void Xoa_NhanVien_Luong_ThapNhat(NhanVien a[MAX], int &n)
{
  int m, min;
  m = 0;
  min = TimLuong_ThapNhat(a, n);

  for (int i = 0; i < n; i++)
    if (a[i].luong != min)
    {
      a[m] = a[i];
      m = m + 1;
    }

  n = m;
}

void HoanVi(NhanVien &a, NhanVien &b)
{
  NhanVien t = a;
  a = b;
  b = t;
}

void SapXep_Tang_NamSinh_MaSo(NhanVien a[MAX], int n)
{
  // Sap xep tang theo nam sinh
  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
      if (a[i].ngayThangNam.nam > a[j].ngayThangNam.nam)
        HoanVi(a[i], a[j]);

  //Sap xep tang theo ma so
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (a[i].ngayThangNam.nam == a[j].ngayThangNam.nam)
        if (strcmp(a[i].maSo, a[j].maSo) > 0)
          HoanVi(a[i], a[j]);
}

void LietKe_NhanVien_Ten(NhanVien a[MAX], int n, char ten[8])
{
  int VT[MAX];
  int m;
  m = 0;

  for (int i = 0; i < n; i++)
    if (strcmp(a[i].hoTen.ten, ten) == 0)
    {
      VT[m] = i;
      m = m + 1;
    }

  if (m == 0)
    cout << "\nKhong co nhan vien co ten \"" << ten << "\" trong danh sach.";
  else
  {
    cout << "\nTim thay " << m << " nhan vien co ten \"" << ten << " \".\n";
    XuatTieuDe();
    for (int i = 0; i < m; i++)
      Xuat_1_NhanVien(a[VT[i]]);
    XuatDongKe('=');
  }
}
