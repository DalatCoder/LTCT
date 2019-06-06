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
