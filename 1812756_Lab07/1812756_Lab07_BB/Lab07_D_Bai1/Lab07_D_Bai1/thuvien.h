#define MAX 100

typedef char String[MAX];

void gets_s_NhapChuoi(String a, char kt);
void XuatChuoi(String a);

void gets_s_NhapChuoi(String a, char kt)
{
	cout << "\nNhap chuoi: " << kt << " = ";
	_flushall(); // xoa vung dem
	gets_s(a, MAX);
}

void XuatChuoi(String a)
{
	cout << a;
}

