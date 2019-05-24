#include <iostream>

using namespace std;

#include "thuvien.h"

int main()
{
    int a[MAX], n, kq;
    NhapTuDong(a, n);
    cout << "\nMang duoc tao ngau nhien: \n";
    XuatMang(a, n);
    kq = TinhBieuThuc(a, n);
    cout << "\nKet qua cua bieu thuc la : " << kq;
    return 0;
}
