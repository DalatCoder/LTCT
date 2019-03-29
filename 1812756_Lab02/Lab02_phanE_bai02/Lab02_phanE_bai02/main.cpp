// Chương trình đổi giờ phút giây
// Input:
//		số giây n
// Output:
//		giờ phút giây tương ứng

#include <iostream>
#include <conio.h>

#define		MAX		3600
#define		SIXTY	60

using namespace std;

void DoiThoiGian(unsigned int n);

int main(int argc, const char **argv) {

	unsigned int soGiay = 0;
	
	cout << endl << "Nhap vao so giay can chuyen doi: ";
	cin >> soGiay;

	DoiThoiGian(soGiay);

	_getch();
	return 0;
}

void DoiThoiGian(unsigned int n) {
	int gio = 0, phut = 0, giay = 0;

	gio = n / MAX;
	phut = (n % MAX) / SIXTY;
	giay = (n % MAX) % SIXTY;

	cout << endl << "So giay " << n << " tuong ung voi "
		<< gio << ":" << phut << ":" << giay;
}

