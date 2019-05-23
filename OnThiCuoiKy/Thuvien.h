
#define MAX 100

struct NgayThangNam
{
    int ngay;
    int thang;
    int nam;
};

struct NhanVien
{
    char maNV[8];
    char hoLot[21];
    char ten[8];
    NgayThangNam ntn;
    char diaChi[21];
    double luong;
};

int DocDuLieuNhanVien(char *filename, NhanVien nv[MAX], int &n)
{
    ifstream in(filename);
    if (!in)
        return 0;

    char maNV[8];
    char hoLot[21];
    char ten[8];
    NgayThangNam ntn;
    char diaChi[21];
    double luong;

    n = 0;
    in >> maNV;
    strcpy(nv[n].maNV, maNV);
    in >> hoLot;
    strcpy(nv[n].hoLot, hoLot);
}
