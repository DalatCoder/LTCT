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

// Khai bao nguyen mau ham
int Doc_ThongTin_NhanVien(char *filename, NhanVien nv[MAX], int &n);
void XuatDongKeNgang();
void XuatTieuDe();
void Xuat_1_NV(NhanVien nv);
void Xuat_DS_NV(NhanVien nv[MAX], int n);

// Dinh nghia ham chuc nang
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

void XuatDongKeNgang()
{
    cout << '|';
    for (int i = 0; i < 86; i++)
        cout << '=';
    cout << '|' << endl;
}

void XuatTieuDe()
{
    XuatDongKeNgang();
    cout << setiosflags(ios::left);
    cout << '|';
    cout << setw(10) << "MS"
         << setw(25) << "Ho va ten"
         << setw(16) << "NTN sinh"
         << setw(20) << "Dia chi"
         << setw(15) << "Luong";
    cout << '|' << endl;
    XuatDongKeNgang();
}

void Xuat_1_NV(NhanVien nv)
{
    cout << setiosflags(ios::left);
    cout << '|'
         << setw(10) << nv.ms
         << setw(25) << nv.hoTen
         << setw(2) << nv.date.ngay << '/'
         << setw(2) << nv.date.thang << '/'
         << setw(10) << nv.date.nam
         << setw(20) << nv.diaChi
         << setiosflags(ios::fixed) << setprecision(2) << setw(15) << nv.luong;
    cout << '|' << endl;
}

void Xuat_DS_NV(NhanVien nv[MAX], int n)
{
    XuatTieuDe();
    for (int i = 0; i < n; i++)
        Xuat_1_NV(nv[i]);
    XuatDongKeNgang();
}
