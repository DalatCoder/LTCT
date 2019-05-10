
#define MAX 100

typedef char String[MAX];

void NhapChuoi(String str);
void XuatChuoi(String str);

void NhapChuoi(String str)
{
	cout << "\nNhap vao chuoi: ";
	cin.ignore(MAX, '\n'); // xoa buffer
	gets_s(str, MAX);
}

void XuatChuoi(String str)
{
	cout << "\n" << str;
}



