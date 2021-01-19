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

    cout << "\nBam phim bat ky de tiep tuc...";
    cin.get();

    return 0;
}

void ChayChuongTrinh()
{
    int soMenu, menu, n;
    NhanVien nv[MAX];
    soMenu = 7;

    do
    {
        menu = ChonMenu(soMenu);
        XuLyMenu(menu, nv, n);
    } while (menu > 0);
}
