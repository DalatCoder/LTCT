#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
    ChayChuongTrinh();
    return 0;
}

void ChayChuongTrinh()
{
    int soMenu = 5, menu, n;
    NhanVien nv[MAX];

    do
    {
        menu = ChonMenu(soMenu);
        XuLyMenu(menu, nv, n);
    } while (menu > 0);
}
