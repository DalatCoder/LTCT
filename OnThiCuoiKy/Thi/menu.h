void XuatMenu()
{
  cout << "\n============== HE THONG CHUC NANG =================\n";
  cout << "\n0. Thoat chuong trinh";
  cout << "\n1. Tao danh sach nhan vien.";
  cout << "\n2. Xuat danh sach nhan vien.";
  cout << "\n===================================================\n";
}

int ChonMenu(int soMenu)
{
  int stt;

  for (;;)
  {
    system("clear"); //linux
    XuatMenu();
    cout << "\nChon chuc nang trong khoang [0.." << soMenu << "] : ";
    cin >> stt;

    if (0 <= stt && stt <= soMenu)
      break;
  }

  return stt;
}

void XuLyMenu(int menu, NhanVien a[MAX], int &n)
{
  char filename[MAX];
  int kq;

  system("clear");
  switch (menu)
  {
  case 0:
    cout << "\nThoat chuong trinh.";
    cin.get();
    break;
  case 1:
    cout << "\n1. Tao danh sach nhan vien.";
    cout << "\nNhap ten file de mo : ";
    cin >> filename;
    kq = TaoDanhSachNhanVien(a, n, filename);
    if (kq == 0)
      cout << "\nMo tap tin khong thanh cong.";
    else
    {
      cout << "\nMo tap tin thanh cong. So nhan vien hien tai la: " << n;
      cout << "\nDanh sach nhan vien hien tai:\n";
      Xuat_DS_NhanVien(a, n);
    }

    cin.get();
    break;
  case 2:
    cout << "\n2. Xuat danh sach nhan vien.";
    cout << "\nDanh sach nhan vien hien tai:\n";
    Xuat_DS_NhanVien(a, n);
    cin.get();
    break;
  }
  cin.get();
}
