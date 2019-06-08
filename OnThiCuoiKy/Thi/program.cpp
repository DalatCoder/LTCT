#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>

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
  int soMenu, menu, n;
  NhanVien nv[MAX];
  soMenu = 6;

  do
  {
    menu = ChonMenu(soMenu);
    XuLyMenu(menu, nv, n);
  } while (menu > 0);
}
