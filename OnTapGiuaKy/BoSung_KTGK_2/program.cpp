#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#include "thuvien.h"

void ChayChuongTrinh();

int main()
{
    ChayChuongTrinh();
    return 0;
}

void ChayChuongTrinh()
{
    int a[MAX], n, kq;
    NhapTuDong(a, n);
    cout << "\nMang ngau nhien vua duoc tao: \n";
    XuatMang(a, n);
    kq = TinhBieuThuc(a, n);
    cout << "\nKet qua cua bieu thuc s = u - v la : " << kq;
    cin.get();
}
