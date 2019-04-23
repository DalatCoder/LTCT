
#define MAX 100

typedef char String[MAX];

void gets_s_NhapChuoi(String a, char kt);
void XuatChuoi(String a);
int strlen_TinhChieuDaiCuaChuoi(String a);

void gets_s_NhapChuoi(String a, char kt)
{
	// Xoa buffer
	// cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.ignore(MAX, '\n');

	cout << "\nNhap chuoi: " << kt << " = ";
	cin.getline(a, MAX);
}

void XuatChuoi(String a)
{
	cout << a;
}

int strlen_TinhChieuDaiCuaChuoi(String a)
{
	int l = strlen(a);
	return l;
}

void strcat_s_Noi_ChuoiSau_VaoSau_ChuoiTruoc(String a, String b)
{

}


