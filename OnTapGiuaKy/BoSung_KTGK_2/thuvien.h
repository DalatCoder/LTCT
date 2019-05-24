#define MAX 100

void NhapTuDong(int a[MAX], int &n);
void XuatMang(int a[MAX], int n);
int TinhTong(int a[MAX], int n);
int KiemTra_SNT(int a);
int TinhMax(int a[MAX], int n);
int TinhMin(int a[MAX], int n);
int TinhBieuThuc(int a[MAX], int n);

void NhapTuDong(int a[MAX], int &n)
{
    int i;
    srand((unsigned)time(NULL));
    cout << "\nNhap vao so luong phan tu cua mang : ";
    cin >> n;

    for (i = 0; i < n; i++)
        a[i] = -10 + rand() % 20 + 1;
}

void XuatMang(int a[MAX], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << '\t';
}

int TinhTong(int a[MAX], int n)
{
    int kq, i;
    kq = 0;

    for (i = 0; i < n; i++)
        if(KiemTra_SNT(a[i]))
            kq += a[i];

    return kq;
}

int TinhMax(int a[MAX], int n)
{
    int kq, i;
    kq = a[0];

    for (i = 1; i < n; i++)
        if (a[i] > kq)
            kq = a[i];

    return kq;
}

int TinhMin(int a[MAX], int n)
{
    int kq, i;
    kq = a[0];

    for (i = 1; i < n; i++)
        if (a[i] < kq)
            kq = a[i];

    return kq;
}

int TinhBieuThuc(int a[MAX], int n)
{
    int s, u, v, max, min;
    u = TinhTong(a, n);
    max = TinhMax(a, n);
    min = TinhMin(a, n);
    v = min * max;
    s = u - v;
    return s;
}

int KiemTra_SNT(int a)
{
    if (a <= 0)
        return 0;

    int kq = 1;

    for (int i = 2; i < a; i++)
        if (a % i == 0)
        {
            kq = 0;
            break;
        }

    return kq;
}
