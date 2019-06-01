
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, NhanVien a[MAX], int &n);

void XuatMenu()
{
  cout << "\n=========== HE THONG CHUC NANG ============\n";
  cout << "\n0. Thoat chuong trinh";
  cout << "\n1. Nhap du lieu tu file";
  cout << "\n2. Xuat du lieu ra man hinh";
  cout << "\n===========================================\n";
}

int ChonMenu(int soMenu)
{
  int stt;

  for (;;)
  {
    system("clear"); // Linux
    XuatMenu();
    cout << "\nChon chuc nang tuong ung tu 1 .. " << soMenu << " : ";
    cin >> stt;
    if (0 <= stt && stt <= soMenu)
      break;
  }
  return stt;
}

void XuLyMenu(int menu, NhanVien a[MAX], int &n)
{
  n = 0;
  int kq;
  char tapTin[MAX];

  switch (menu)
  {
  case 0:
    cout << "\n0. Thoat chuong trinh";
    break;

  case 1:
    cout << "\n1. Nhap du lieu tu file";
    cout << "\nNhap ten tap tin de mo: ";
    cin >> tapTin;
    kq = docDuLieuTuFile(a, n, tapTin);

    if (kq == 0)
    {
      cout << "\nMo tap tin khong thanh cong";
    }
    else
    {
      cout << "\nMo tap tin thanh cong!" << endl;
      cout << "\nSo nhan vien hien tai co trong danh sach la : " << n << endl;
    }

    cin.get();
    break;
  case 2:
    cout << "\n2. Xuat du lieu ra man hinh";
    break;
  }
  cin.get();
}
