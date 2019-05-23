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
