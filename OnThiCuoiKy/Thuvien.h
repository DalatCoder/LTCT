#define MAX 100

struct Date
{
    int ngay;
    int thang;
    int nam;
};

struct NhanVien
{
    int ms;
    char hoTen[MAX];
    Date date;
    char diaChi[MAX];
    double luong;
};

int Doc_ThongTin_NhanVien(char *filename, NhanVien nv[MAX], int &n)
{
    ifstream in(filename);
    if (!in)
        return 0;

    int ms;
    char hoTen[MAX];
    Date date;
    char diaChi[MAX];
    double luong;

    n = 0;

    in >> ms;
    nv[n].ms = ms;
    in >> hoTen;
    strcpy(nv[n].hoTen, hoTen);
    in >> date.ngay;
    nv[n].date.ngay = date.ngay;
    in >> date.thang;
    nv[n].date.thang = date.thang;
    in >> date.nam;
    nv[n].date.nam = date.nam;
    in >> diaChi;
    strcpy(nv[n].diaChi, diaChi);
    in >> luong;
    nv[n].luong = luong;

    while (!in.eof())
    {
        n++;
        in >> ms;
        nv[n].ms = ms;
        in >> hoTen;
        strcpy(nv[n].hoTen, hoTen);
        in >> date.ngay;
        nv[n].date.ngay = date.ngay;
        in >> date.thang;
        nv[n].date.thang = date.thang;
        in >> date.nam;
        nv[n].date.nam = date.nam;
        in >> diaChi;
        strcpy(nv[n].diaChi, diaChi);
        in >> luong;
        nv[n].luong = luong;
    }
    n++;
    in.close();
}
