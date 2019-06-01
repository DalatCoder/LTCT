
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
  ChayChuongTrinh();

  return 0;
}

void ChayChuongTrinh()
{
  int soMenu = 3;
  int menu;
  int n; // kich thuoc mang
  NhanVien a[MAX];

  docDuLieuTuFile(a, n, "nhanvien.txt");
  HienThiDuLieu(a, n);

  // do
  // {
  //   menu = ChonMenu(soMenu);
  //   XuLyMenu(menu, a, n);
  // } while (menu > 0);
}
