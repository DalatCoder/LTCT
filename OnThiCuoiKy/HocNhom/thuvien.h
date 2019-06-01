
#define MAX 100

// strcpy
// strlen
// strcmp

struct NhanVien
{
  char maSo[7];
  char hoTen[25];
  int ngaySinh;
  int thangSinh;
  int namSinh;
  char queQuan[20];
  double luong;
};

// nguyen mau ham
int docDuLieuTuFile(NhanVien nv[MAX], int &n, char tenTapTin[MAX]);
void InDuongKe(char kt);
void InTieuDe();
void In_1_NhanVien(NhanVien nv);
void HienThiDuLieu(NhanVien a[MAX], int n);

// dinh nghia ham
int docDuLieuTuFile(NhanVien nv[MAX], int &n, char tenTapTin[MAX])
{
  ifstream in(tenTapTin); // input file stream

  // kiem tra mo file co thanh cong hay khong
  if (!in)
    return 0; // mo file that bai

  n = 0;            // chua co nhan vien nao het
  in >> nv[n].maSo; // cin >>
  in >> nv[n].hoTen;
  in >> nv[n].ngaySinh;
  in >> nv[n].thangSinh;
  in >> nv[n].namSinh;
  in >> nv[n].queQuan;
  in >> nv[n].luong;
  // doc xong du lieu cho nhan vien dau tien

  //0, 1, 2, 3, 4,

  while (!in.eof())
  {
    n = n + 1;

    in >> nv[n].maSo;
    in >> nv[n].hoTen;
    in >> nv[n].ngaySinh;
    in >> nv[n].thangSinh;
    in >> nv[n].namSinh;
    in >> nv[n].queQuan;
    in >> nv[n].luong;
  }

  // dong file
  in.close();
  return 1; // mo file thanh cong
  // n = 12;
}

// |=============================================================================
// |Maso    |HoTen            |ngaythangnam       |quequan           |luong
// |=============================================================================
// 1
// 2
// 3
// ------------------------------------------------------------------------------
// 4
// 5
// 6
// ------------------------------------------------------------------------------
// ==============================================================================

// 11/03/2000

void InTieuDe()
{
  InDuongKe('=');
  cout << endl;
  cout << '|';
  cout << setiosflags(ios::left);
  cout << setw(7) << "MaSo" << '|'
       << setw(25) << "Ho va Ten" << '|'
       << setw(14) << "Nam Sinh" << '|'
       << setw(15) << "Que Quan" << '|'
       << setw(12) << "Tien luong" << '|';
  cout << endl;

  InDuongKe('=');
  cout << endl;
}

void In_1_NhanVien(NhanVien nv)
{
  cout << '|';
  cout << setiosflags(ios::left);
  cout << setw(7) << nv.maSo << '|'
       << setw(25) << nv.hoTen << '|'
       << setw(2) << nv.ngaySinh << "/"
       << setw(2) << nv.thangSinh << "/"
       << setw(8) << nv.namSinh << '|'
       << setw(15) << nv.queQuan << '|'
       << setiosflags(ios::fixed) << setprecision(2) << setw(12) << nv.luong;

  cout << '|' << endl;
}

void InDuongKe(char kt)
{
  cout << '|';
  for (int i = 1; i <= 77; i++)
    cout << kt;
  cout << '|';
}

void HienThiDuLieu(NhanVien a[MAX], int n)
{
  // In tieu de
  InTieuDe();

  // Tu 1 - 12: in ra 12 thang
  for (int i = 0; i < n; i++)
  {
    In_1_NhanVien(a[i]);
    if ((i + 1) % 3 == 0)
    {
      InDuongKe('-');
      cout << endl;
    }
  }

  // In ke doi
  InDuongKe('=');
}
