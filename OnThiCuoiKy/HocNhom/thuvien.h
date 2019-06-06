#define MAX 100
struct NhanVien
{
	char maSo[7];
	char hoTen[25];
	int ngaySinh;
	int thangSinh;
	int namSinh;
	char queQuan[15];
	double luong;
};
int DemSo_NV(NhanVien a[MAX], int &n, char tapTin[MAX]);

int DemSo_NV(NhanVien a[MAX], int &n, char tapTin[MAX])
{
	ifstream in(tapTin);
	if (!in)
		return 0;
	n = 0;
	in >> a[n].maSo;
	in >> a[n].hoTen;
	in >> a[n].ngaySinh;
	in >> a[n].thangSinh;
	in >> a[n].namSinh;
	in >> a[n].queQuan;
	in >> a[n].luong;

	while (!in.eof())
	{
		n = n + 1;
		in >> a[n].maSo;
		in >> a[n].hoTen;
		in >> a[n].ngaySinh;
		in >> a[n].thangSinh;
		in >> a[n].namSinh;
		in >> a[n].queQuan;
		in >> a[n].luong;
	}
	n++;
	in.close();
	return 1;
}
